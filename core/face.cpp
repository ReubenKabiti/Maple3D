#include "face.h"


unsigned int Face::materialIndex() const
{
    return m_materialIndex;
}

void Face::setMaterialIndex(unsigned int newMaterialIndex)
{
    m_materialIndex = newMaterialIndex;
}

const std::vector<unsigned int> &Face::edges() const
{
    return m_edges;
}

void Face::addEdge(unsigned int edge)
{
    m_edges.push_back(edge);
}

Face::Face()
{

}
