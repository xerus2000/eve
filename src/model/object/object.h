#ifndef EVE_OBJECT_H
#define EVE_OBJECT_H

#include "../model.h"

#include <vector>

/* Abstract base class for all objects in the world */
class Object {
protected:
    Point position;

public:
    Object(double x, double y);
    virtual ~Object() = 0;

    Point getPosition();
};


#endif //EVE_OBJECT_H
