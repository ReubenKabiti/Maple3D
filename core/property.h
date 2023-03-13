#ifndef PROPERTY_H
#define PROPERTY_H

class Object;

class Property
{
protected:
    Object *m_parent;
public:

    Property(Object * parent) : m_parent(parent) {}

    virtual void exec() = 0;

    Object *parent() const;
    void setParent(Object *newParent);
};

inline Object *Property::parent() const
{
    return m_parent;
}

inline void Property::setParent(Object *newParent)
{
    m_parent = newParent;
}

#endif // PROPERTY_H
