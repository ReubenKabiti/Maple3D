#include "transform.h"
#include "object.h"

const vec3 &Transform::position() const
{
    return m_position;
}

void Transform::setPosition(const vec3 &newPosition)
{
    m_position = newPosition;
}

const vec3 &Transform::rotation() const
{
    return m_rotation;
}

void Transform::setRotation(const vec3 &newRotation)
{
    m_rotation = newRotation;
}

const vec3 &Transform::scale() const
{
    return m_scale;
}

void Transform::setScale(const vec3 &newScale)
{
    m_scale = newScale;
}

Transform::Transform(Object * parent)
    : Property(parent)
{
    m_position = vec3(0);
    m_rotation = vec3(0);
    m_scale = vec3(1);
}
