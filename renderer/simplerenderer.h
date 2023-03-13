#ifndef SIMPLERENDERER_H
#define SIMPLERENDERER_H

#include "renderer.h"
#include "core/object.h"
#include "core/mesh.h"
#include <vector>

class SimpleRenderer : public Renderer
{
private:
    std::vector<float> m_vertices;
    std::vector<unsigned int> m_indices;
    unsigned int m_currentMesh = 0;
public:
    SimpleRenderer();
    void push(Object *parent, Mesh *mesh);
    void render();
};

#endif // SIMPLERENDERER_H
