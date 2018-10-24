#ifndef GLWIDGET_H
#define GLWIDGET_H

//#include <QOpenGLWidget>
//#include <QOpenGLFunctions>


//#include <Qt3DRender/QMesh>
//#include <Qt3DCore/QEntity>
//#include <Qt3DExtras/QPhongMaterial>
//#include <Qt3DExtras/Qt3DWindow>

#include <QOpenGLWidget>
#include <QOpenGLFunctions>
#include <QOpenGLBuffer>

QT_FORWARD_DECLARE_CLASS(QOpenGLShaderProgram);
QT_FORWARD_DECLARE_CLASS(QOpenGLTexture)


class GLWidget : public QOpenGLWidget, protected QOpenGLFunctions
{

    Q_OBJECT

public:
    explicit GLWidget(QWidget* parent = nullptr);
    ~GLWidget();

    QSize minimumSizeHint() const override;
    QSize sizeHint() const override;
    void rotateBy(int xAngle, int yAngle, int zAngle);
    void setClearColor(const QColor &color);


    void SetActive(bool value);

signals:
    void clicked();

public slots:
    void createNewCube();

protected:
    void initializeGL() override;
    void paintGL() override;
    void resizeGL(int w, int h) override;
    void mousePressEvent(QMouseEvent* event) override;
    void mouseMoveEvent(QMouseEvent* event) override;
    void mouseReleaseEvent(QMouseEvent* event) override;

private:
    void makeObject();

    //---vars
    QColor clearColor;
    QPoint lastPos;
    int xRot;
    int yRot;
    int zRot;
    bool active;
    QOpenGLTexture* textures[6];
    QOpenGLShaderProgram* program;
    QOpenGLBuffer vbo;


//    Qt3DCore::QEntity *entity;
//    Qt3DExtras::QPhongMaterial *material;
//    Qt3DRender::QMesh* mesh;
//    Qt3DExtras::Qt3DWindow view;
};

#endif // GLWIDGET_H
