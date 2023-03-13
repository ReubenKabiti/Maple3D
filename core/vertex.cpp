#include "vertex.h"

Vertex::Vertex()
{

}

// setters
void Vertex::setPosition(const vec3 &newPosition)
{
    m_position = newPosition;
}

void Vertex::setNormal(const vec3 &newNormal)
{
    m_normal = newNormal;
}

void Vertex::setTexCoords(const vec2 &newTexCoords)
{
    m_texCoords = newTexCoords;
}

void Vertex::setUvCoords(const vec2 &newUvCoords)
{
    m_uvCoords = newUvCoords;
}

void Vertex::setVertexColor(const vec4 &newVertexColor)
{
    m_vertexColor = newVertexColor;
}

// getters
const vec4 &Vertex::vertexColor() const
{
    return m_vertexColor;
}

const vec3 &Vertex::position() const
{
    return m_position;
}

const vec3 &Vertex::normal() const
{
    return m_normal;
}

const vec2 &Vertex::texCoords() const
{
    return m_texCoords;
}

const vec2 &Vertex::uvCoords() const
{
    return m_uvCoords;
}
