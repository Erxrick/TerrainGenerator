#include "glwidget.h"
#include <Qt3DExtras/QSphereMesh>
#include <gl/GLU.h>
#include <gl/GLU.h>

GLWidget::GLWidget(QWidget *parent) : QOpenGLWidget(parent)
{

}

void GLWidget::initializeGL()
{
    glClearColor(0, 1, 0, 1);
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_LIGHT0);
    glEnable(GL_LIGHTING);
    glEnable(GL_COLOR_MATERIAL);

}

void GLWidget::paintGL()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    gluLookAt(0,0,5, 0,0,0, 0,1,0);



    glColor3f(1,0,0);
    GLUquadricObj* s = gluNewQuadric();

    gluSphere(s, 1, 200, 200);


    GLUtesselator* t = gluNewTess();


}


void GLWidget::resizeGL(int w, int h)
{
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    gluPerspective(45.0, (w > h) ? w/h : h/w, 0.01, 100.0);

 //   paintGL();
}
