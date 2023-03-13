#ifndef VERTEX_H
#define VERTEX_H
#include "types.h"

class Vertex
{
private:
    vec4 m_vertexColor;
    vec3 m_position;
    vec3 m_normal;
    vec2 m_texCoords;
    vec2 m_uvCoords;
public:
    Vertex();
    void setVertexColor(const vec4 &newVertexColor);
    void setPosition(const vec3 &newPosition);
    void setNormal(const vec3 &newNormal);
    void setTexCoords(const vec2 &newTexCoords);
    void setUvCoords(const vec2 &newUvCoords);
    const vec4 &vertexColor() const;
    const vec3 &position() const;
    const vec3 &normal() const;
    const vec2 &texCoords() const;
    const vec2 &uvCoords() const;
};
#endif // VERTEX_H
