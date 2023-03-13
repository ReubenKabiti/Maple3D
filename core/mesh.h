#ifndef MESH_H
#define MESH_H
#include "property.h"
#include "face.h"
#include "edge.h"
#include "vertex.h"
#include <vector>

class Renderer;

class Mesh : public Property
{
private:
    std::vector<Face> m_faces;
    std::vector<Edge> m_edges;
    std::vector<Vertex> m_vertices;
    Renderer *m_renderer = nullptr;

public:
    Mesh(Object *parent);
    const std::vector<Face> &faces() const;
    const std::vector<Edge> &edges() const;
    const std::vector<Vertex> &vertices() const;

    void addFace(Face face);
    void addEdge(Edge edge);
    void addVertex(Vertex vertex);

    void exec(); // tells renderer to add it to the render queue
    void setRenderer(Renderer *newRenderer);
};

#endif // MESH_H
