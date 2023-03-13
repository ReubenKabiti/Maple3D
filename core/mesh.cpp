#include "mesh.h"
#include "object.h"
#include "renderer/renderer.h"
#include "globals.h"

const std::vector<Face> &Mesh::faces() const
{
    return m_faces;
}

const std::vector<Edge> &Mesh::edges() const
{
    return m_edges;
}

const std::vector<Vertex> &Mesh::vertices() const
{
    return m_vertices;
}

void Mesh::addFace(Face face)
{
    m_faces.push_back(face);
}

void Mesh::addEdge(Edge edge)
{
    m_edges.push_back(edge);
}

void Mesh::addVertex(Vertex vertex)
{
    m_vertices.push_back(vertex);
}

void Mesh::exec()
{
    // we might sometimes want to render the mesh using another renderer
    if (m_renderer != nullptr)
        m_renderer->push(m_parent, this);
    // gRenderer is assumed to be initialised
    Globals::gRenderer->push(m_parent, this);
}

void Mesh::setRenderer(Renderer *newRenderer)
{
    m_renderer = newRenderer;
}

Mesh::Mesh(Object *parent)
    : Property(parent)
{

}
