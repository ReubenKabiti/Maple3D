#ifndef TRANSFORM_H
#define TRANSFORM_H
#include "property.h"
#include "types.h"

class Transform : public Property
{
private:
    vec3 m_position;
    vec3 m_rotation;
    vec3 m_scale;
public:
    Transform(Object * parent);

    const vec3 &position() const;
    void setPosition(const vec3 &newPosition);
    const vec3 &rotation() const;
    void setRotation(const vec3 &newRotation);
    const vec3 &scale() const;
    void setScale(const vec3 &newScale);

    void exec() override {}
    // returns the global transform with parent set to null
    // todo: implement this function
    Transform getGlobalTransform();
};

#endif // TRANSFORM_H
