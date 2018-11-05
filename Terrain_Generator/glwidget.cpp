//#include "glwidget.h"
//#include <Qt3DExtras/QSphereMesh>
//#include <gl/GLU.h>
//#include <QUrl>
//#include <QDebug>
//#include <QFileInfo>
//#include <Qt3DRender/QGeometry>
//#include <Qt3DRender/QGeometryFactory>


#include "glwidget.h"
#include <QOpenGLShaderProgram>
#include <QMouseEvent>


//#include <CGAL/Triangulation_vertex_base_with_info_3.h>

GLWidget::GLWidget(QWidget *parent) : QOpenGLWidget(parent), clearColor(Qt::green), xRot(0), yRot(0), zRot(0), program(nullptr)
{

}

GLWidget::~GLWidget()
{
    makeCurrent();
    vbo.destroy();
    delete program;
    doneCurrent();
}

QSize GLWidget::minimumSizeHint() const
{
    return QSize(50, 50);
}

QSize GLWidget::sizeHint() const
{
    return QSize(200, 200);
}

void GLWidget::rotateBy(int xAngle, int yAngle, int zAngle)
{
    xRot += xAngle;
    yRot -= yAngle;
    zRot += zAngle;
    update();
}

void GLWidget::setClearColor(const QColor &color)
{
    clearColor = color;
    update();
}

void GLWidget::SetActive(bool value)
{
    active = value;
}

void GLWidget::initializeGL()
{
    initializeOpenGLFunctions();

    makeObject();

    glEnable(GL_DEPTH_TEST);
    glEnable(GL_CULL_FACE);

#define PROGRAM_VERTEX_ATTRIBUTE 0

    QOpenGLShader *vshader = new QOpenGLShader(QOpenGLShader::Vertex, this);
       const char *vsrc =
           "attribute highp vec4 vertex;\n"
           "varying mediump vec4 color;\n"
           "uniform mediump mat4 matrix;\n"
           "void main(void)\n"
           "{\n"
           "    gl_Position = matrix * vertex;\n"
           "    color = vertex;\n"
           "}\n";
       vshader->compileSourceCode(vsrc);

       QOpenGLShader *fshader = new QOpenGLShader(QOpenGLShader::Fragment, this);
                    //       texture2D(texture, texc.st);\n
       const char *fsrc =
           "varying mediump vec4 color;\n"
           "void main(void)\n"
           "{\n"
           "    gl_FragColor = color;\n"
           "}\n";
       fshader->compileSourceCode(fsrc);

       program = new QOpenGLShaderProgram;
       program->addShader(vshader);
       program->addShader(fshader);
       program->bindAttributeLocation("vertex", PROGRAM_VERTEX_ATTRIBUTE);
       program->link();

       program->bind();



}

void GLWidget::paintGL()
{
    if(active)
    {
        glClearColor(clearColor.redF(), clearColor.greenF(), clearColor.blueF(), clearColor.alphaF());
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

        QMatrix4x4 m;
        m.ortho(-0.5f, +0.5f, +0.5f, -0.5f, 4.0f, 15.0f);
        m.translate(0.0f, 0.0f, -10.0f);
        m.rotate(xRot / 16.0f, 1.0f, 0.0f, 0.0f);
        m.rotate(yRot / 16.0f, 0.0f, 1.0f, 0.0f);
        m.rotate(zRot / 16.0f, 0.0f, 0.0f, 1.0f);


        program->setUniformValue("matrix", m);
        program->enableAttributeArray(PROGRAM_VERTEX_ATTRIBUTE);
        program->setAttributeBuffer(PROGRAM_VERTEX_ATTRIBUTE, GL_FLOAT, 0, 3, 3 * sizeof(GLfloat));

        for (int i = 0; i < 6; ++i)
        {
            glDrawArrays(GL_TRIANGLE_FAN, i * 4, 4);
        }
    }
}


void GLWidget::resizeGL(int w, int h)
{
    int side = qMin(w, h);
    glViewport((w-side)/2, (h-side) / 2, side, side);



//    glViewport(0, 0, w, h);
//    glMatrixMode(GL_PROJECTION);
//    glLoadIdentity();

//    gluPerspective(45.0, (w > h) ? w/h : h/w, 0.01, 100.0);

 //   paintGL();
}

void GLWidget::mousePressEvent(QMouseEvent *event)
{
    lastPos = event->pos();
}

void GLWidget::mouseMoveEvent(QMouseEvent *event)
{
    int dx = event->x() - lastPos.x();
    int dy = event->y() - lastPos.y();

    if (event->buttons() & Qt::LeftButton) {
        rotateBy(8 * dy, 8 * dx, 0);
    } else if (event->buttons() & Qt::RightButton) {
        rotateBy(8 * dy, 0, 8 * dx);
    }
    lastPos = event->pos();
}

void GLWidget::mouseReleaseEvent(QMouseEvent * /* event */)
{
    emit clicked();
}

void GLWidget::makeObject()
{
    static const int coords[6][4][3] = {
        { { +1, -1, -1 }, { -1, -1, -1 }, { -1, +1, -1 }, { +1, +1, -1 } },
        { { +1, +1, -1 }, { -1, +1, -1 }, { -1, +1, +1 }, { +1, +1, +1 } },
        { { +1, -1, +1 }, { +1, -1, -1 }, { +1, +1, -1 }, { +1, +1, +1 } },
        { { -1, -1, -1 }, { -1, -1, +1 }, { -1, +1, +1 }, { -1, +1, -1 } },
        { { +1, -1, +1 }, { -1, -1, +1 }, { -1, -1, -1 }, { +1, -1, -1 } },
        { { -1, -1, +1 }, { +1, -1, +1 }, { +1, +1, +1 }, { -1, +1, +1 } }
    };

    QVector<GLfloat> vertData;
    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 4; ++j) {
            // vertex position
            vertData.append(0.2f * coords[i][j][0]);
            vertData.append(0.2f * coords[i][j][1]);
            vertData.append(0.2f * coords[i][j][2]);

        }
    }

    vbo.create();
    vbo.bind();
    vbo.allocate(vertData.constData(), vertData.count() * sizeof(GLfloat));
}

void GLWidget::createNewCube()
{
    vbo.destroy();

    makeObject();

    xRot = 0;
    yRot = 0;
    zRot = 0;
    update();
}

