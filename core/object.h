#ifndef OBJECT_H
#define OBJECT_H
#include "property.h"
#include "transform.h"
#include <vector>
#include <memory>

class Object
{
protected:
    std::vector<std::shared_ptr<Property>> m_properties;
    vec3 m_origin;
    Object *m_parent = nullptr;
public:
    Object(Object *parent)
    {
        /*
         * Just making sure that the first Property of any object is its transform
        */

        auto transform = new Transform(this);
        addProperty(transform);

        // set the parent
        setParent(parent);
    }

    inline void addProperty(Property *prop)
    {
        std::shared_ptr<Property> p(prop);
        m_properties.push_back(p);
    }
    const std::vector<std::shared_ptr<Property>> &properties() const;
    Object *parent() const;
    void setParent(Object *newParent);
    const vec3 &origin() const;
    void setOrigin(const vec3 &newOrigin);
};

inline Object *Object::parent() const
{
    return m_parent;
}

inline void Object::setParent(Object *newParent)
{
    m_parent = newParent;
}

inline const vec3 &Object::origin() const
{
    return m_origin;
}

inline void Object::setOrigin(const vec3 &newOrigin)
{
    m_origin = newOrigin;
}

inline const std::vector<std::shared_ptr<Property>> &Object::properties() const
{
    return m_properties;
}

#endif // OBJECT_H
