#ifndef RENDERER_H
#define RENDERER_H
#include "core/object.h"
#include "core/mesh.h"

class Renderer
{
public:
    Renderer();
    virtual ~Renderer();

    virtual void push(Object *parent, Mesh *mesh) = 0;
    virtual void render() = 0;
};

#endif // RENDERER_H
