#include "edge.h"

unsigned int Edge::startVertex() const
{
    return m_startVertex;
}

void Edge::setStartVertex(unsigned int newStartVertex)
{
    m_startVertex = newStartVertex;
}

unsigned int Edge::endVertex() const
{
    return m_endVertex;
}

void Edge::setEndVertex(unsigned int newEndVertex)
{
    m_endVertex = newEndVertex;
}

Edge::Edge()
{

}

Edge::Edge(unsigned int sV, unsigned int eV)
{
    m_startVertex = sV;
    m_endVertex = eV;
}

