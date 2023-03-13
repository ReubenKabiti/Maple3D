#ifndef GLWIDGET_H
#define GLWIDGET_H

#include <QObject>
#include <QWidget>
#include <GL/glew.h>
#include <QOpenGLWidget>
#include <vector>
#include "core/object.h"

class GLWidget : public QOpenGLWidget
{
    Q_OBJECT
private:
    std::vector<Object *> m_objects;
public:
    explicit GLWidget(QWidget *parent = nullptr);
    ~GLWidget();
    void initializeGL();
    void paintGL();
    void resizeGL(int w, int h);

signals:

};

#endif // GLWIDGET_H
