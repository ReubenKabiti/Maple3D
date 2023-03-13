#ifndef FACE_H
#define FACE_H
#include <vector>
#include <memory>

class Face
{
private:
    std::vector<unsigned int> m_edges; // list of all the edges that comprise the polygon in winding order (counter clockwise)
    unsigned int m_materialIndex; // the index of the material that this face uses
public:
    Face();
    unsigned int materialIndex() const;
    void setMaterialIndex(unsigned int newMaterialIndex);
    const std::vector<unsigned int> &edges() const;
    void addEdge(unsigned int edge);
};
#endif // FACE_H
