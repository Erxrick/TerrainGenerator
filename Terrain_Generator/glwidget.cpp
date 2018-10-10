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
//#include <QOpenGLTexture>
#include <QMouseEvent>


GLWidget::GLWidget(QWidget *parent) : QOpenGLWidget(parent), clearColor(Qt::green), xRot(0), yRot(0), zRot(0), program(nullptr)
{
 //   memset(textures, 0, sizeof(textures));
}

GLWidget::~GLWidget()
{
    makeCurrent();
    vbo.destroy();
   // for (int i = 0; i < 6; ++i)
  //        delete textures[i];
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

void GLWidget::initializeGL()
{
    initializeOpenGLFunctions();

    makeObject();

    glEnable(GL_DEPTH_TEST);
    glEnable(GL_CULL_FACE);

#define PROGRAM_VERTEX_ATTRIBUTE 0
#define PROGRAM_TEXCOORD_ATTRIBUTE 1

    QOpenGLShader *vshader = new QOpenGLShader(QOpenGLShader::Vertex, this);
       const char *vsrc =
           "attribute highp vec4 vertex;\n"
           "attribute mediump vec4 texCoord;\n"
           "varying mediump vec4 texc;\n"
           "uniform mediump mat4 matrix;\n"
           "void main(void)\n"
           "{\n"
           "    gl_Position = matrix * vertex;\n"
           "    texc = texCoord;\n"
           "}\n";
       vshader->compileSourceCode(vsrc);

       QOpenGLShader *fshader = new QOpenGLShader(QOpenGLShader::Fragment, this);
                    //       texture2D(texture, texc.st);\n
       const char *fsrc =
           "uniform sampler2D texture;\n"
           "varying mediump vec4 texc;\n"
           "void main(void)\n"
           "{\n"
           "    gl_FragColor = texc;\n"
           "}\n";
       fshader->compileSourceCode(fsrc);

       program = new QOpenGLShaderProgram;
       program->addShader(vshader);
       program->addShader(fshader);
       program->bindAttributeLocation("vertex", PROGRAM_VERTEX_ATTRIBUTE);
       program->bindAttributeLocation("texCoord", PROGRAM_TEXCOORD_ATTRIBUTE);
       program->link();

       program->bind();
       program->setUniformValue("texture", 0);


//    glClearColor(0, 1, 0, 1);
//    glEnable(GL_DEPTH_TEST);
//    //glEnable(GL_COLOR_MATERIAL);
//    glEnable(GL_CULL_FACE);
//    glShadeModel(GL_SMOOTH);
//    glEnable(GL_LIGHTING);
//    glEnable(GL_LIGHT0);
//    glEnable(GL_MULTISAMPLE);
//    static GLfloat lightPosition[4] = { 0.5, 5.0, 7.0, 1.0 };
//    glLightfv(GL_LIGHT0, GL_POSITION, lightPosition);




//    entity = new Qt3DCore::QEntity();

//    material = new Qt3DExtras::QPhongMaterial();
//    material->setDiffuse(QColor(254, 254, 254));

//    mesh = new Qt3DRender::QMesh();

//    mesh->setMeshName("pumpkin");

//    QUrl data = QUrl::fromLocalFile(QStringLiteral("bunny.obj"));
//    //data.setScheme("file");
//    //data.setPath("bunny.obj");

//    qDebug() << data.isValid() << data.toLocalFile() << QFileInfo(data.toLocalFile()).exists() << data.fileName();

//    mesh->setSource(data);

//    qDebug() << mesh->source().isEmpty() << " = is the source empty.";

//    Qt3DRender::QGeometryFactory *geometry_factory = mesh->geometryFactory().data(); // << mesh->geometryFactory().data() returns null pointer
//     if (!geometry_factory) {
//     throw std::runtime_error("Could not construct geometry from mesh: " +
//     mesh->source().toString().toStdString());
//     }
//     Qt3DRender::QGeometry *geometry = geometry_factory->operator()();

//     mesh->setGeometry(geometry);






  //  entity->addComponent(mesh);
  //  entity->addComponent(material);



//    qDebug() << mesh->meshName();
//    qDebug() << mesh->geometry();

//    buffer->setData(Qt3DRender::QMesh)


}

void GLWidget::paintGL()
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
    program->enableAttributeArray(PROGRAM_TEXCOORD_ATTRIBUTE);
    program->setAttributeBuffer(PROGRAM_VERTEX_ATTRIBUTE, GL_FLOAT, 0, 3, 5 * sizeof(GLfloat));
    program->setAttributeBuffer(PROGRAM_TEXCOORD_ATTRIBUTE, GL_FLOAT, 3 * sizeof(GLfloat), 2, 5 * sizeof(GLfloat));

    for (int i = 0; i < 6; ++i) {
 //         textures[i]->bind();
          glDrawArrays(GL_TRIANGLE_FAN, i * 4, 4);
      }

//    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

//    glMatrixMode(GL_MODELVIEW);
//    glLoadIdentity();

//    gluLookAt(0,0,5, 0,0,0, 0,1,0);

//    glColor3f(1,0,0);
//    GLUquadricObj* s = gluNewQuadric();
//    gluSphere(s, 1, 200, 200);


    //qDebug() << mesh->status();


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
            vertData.append(0.2 * coords[i][j][0]);
            vertData.append(0.2 * coords[i][j][1]);
            vertData.append(0.2 * coords[i][j][2]);
            // texture coordinate
            vertData.append(j == 0 || j == 3);
            vertData.append(j == 0 || j == 1);
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

