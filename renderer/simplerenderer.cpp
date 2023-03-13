#include "simplerenderer.h"
#include <GL/glew.h>
#include <QDebug>

SimpleRenderer::SimpleRenderer()
{
    static auto res = glewInit();
    if (res != GLEW_OK)
        qDebug() << "Failed to initialize glew";
    else
        qDebug() << "Initialized glew successfully";
}

void SimpleRenderer::push(Object *parent, Mesh *mesh)
{
    for (auto vert : mesh->vertices())
    {
        m_vertices.push_back(vert.position().x);
        m_vertices.push_back(vert.position().y);
    }

    auto faces = mesh->faces();
    // go through all the edges of every face and extract unique vertices
    for (auto face : faces)
    {
        for (unsigned int i = 0; i < face.edges().size(); i++)
        {
           auto edge = mesh->edges()[face.edges()[i]];
           // if it is the first edge, we use both its vertices
           if (i == 0)
           {
               auto v1 = edge.startVertex();
               auto v2 = edge.endVertex();
               m_indices.push_back(v1 + m_currentMesh);
               m_indices.push_back(v2 + m_currentMesh);
           }
           // else, add only the end vertex of the edge
           else
           {
               m_indices.push_back(edge.endVertex() + m_currentMesh);
           }
         }
    }
    m_currentMesh += 1;
}

void SimpleRenderer::render()
{
    glBegin(GL_TRIANGLES);
    for (unsigned int i = 0; i < m_indices.size(); i++)
    {
        unsigned int index = m_indices[i];
        float x = m_vertices[index];
        float y = m_vertices[index + 1];
        glVertex2f(x, y);
    }
    glEnd();
    m_currentMesh = 0;
    m_indices.clear();
    m_vertices.clear();
}





