#include "glwidget.h"
#include <QDebug>
#include "globals.h"
#include "renderer/simplerenderer.h"
#include "core/mesh.h"
#include "core/types.h"

GLWidget::GLWidget(QWidget *parent)
    : QOpenGLWidget{parent}
{
    Object *tri = new Object(nullptr);
    Mesh *triMesh = new Mesh(tri);
    Vertex v1, v2, v3, v4, v5, v6;

    // vertices
    v1.setPosition(vec3(0, 0.5, 0));
    v2.setPosition(vec3(-0.5, -0.5, 0));
    v3.setPosition(vec3(0.5, -0.5, 0));

    v4.setPosition(vec3(0, 0.5, 0));
    v5.setPosition(vec3(0.0, -0.5, 0));
    v6.setPosition(vec3(0.5, 0.5, 0));

    triMesh->addVertex(v1);
    triMesh->addVertex(v2);
    triMesh->addVertex(v3);

    triMesh->addVertex(v4);
    triMesh->addVertex(v5);
    triMesh->addVertex(v6);

    // edges
    triMesh->addEdge(Edge(0, 1));
    triMesh->addEdge(Edge(1, 2));
    triMesh->addEdge(Edge(2, 0));

    triMesh->addEdge(Edge(3, 4));
    triMesh->addEdge(Edge(4, 5));
    triMesh->addEdge(Edge(5, 3));

    // faces
    Face face;
    face.addEdge(0);
    face.addEdge(1);
    face.addEdge(2);

    Face face1;
    face1.addEdge(3);
    face1.addEdge(4);
    face1.addEdge(5);

    triMesh->addFace(face1);
    triMesh->addFace(face);

    tri->addProperty(triMesh);
    m_objects.push_back(tri);
}

GLWidget::~GLWidget()
{
    for (auto obj : m_objects)
    {
        delete obj;
    }
}

void GLWidget::initializeGL()
{
    Globals::gRenderer = new SimpleRenderer;
}

void GLWidget::paintGL()
{
    glClear(GL_COLOR_BUFFER_BIT);
    for (auto obj : m_objects)
    {
        auto props = obj->properties();
        for (auto prop : props)
        {
            prop->exec();
        }
    }
    Globals::gRenderer->render();
}

void GLWidget::resizeGL(int w, int h)
{

    glViewport(0, 0, w, h);
}
