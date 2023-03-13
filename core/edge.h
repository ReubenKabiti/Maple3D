#ifndef EDGE_H
#define EDGE_H
#include "vertex.h"
class Edge
{
private:
    unsigned int m_startVertex;
    unsigned int m_endVertex;
public:
    Edge();
    Edge(unsigned int sV, unsigned int eV);

    unsigned int startVertex() const;
    void setStartVertex(unsigned int newStartVertex);
    unsigned int endVertex() const;
    void setEndVertex(unsigned int newEndVertex);
};
#endif // EDGE_H
