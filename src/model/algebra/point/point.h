#ifndef EVE_POINT_H
#define EVE_POINT_H

#include "../algebra_conf.h"

#include <cmath>

struct Point {
    double x;
    double y;
    Point (double x, double y);

    Point & operator = (const Vector & v);

    bool operator == (const Point & p) const;

    double operator / (const Point & p) const;      // Evaluates the distance between the two points

    Point operator + (const Point & p) const;
    Point operator + (const Vector & v) const;

    Point operator - (const Point & p) const;
    Point operator - (const Vector & v) const;

    /* Operators to calculate the vector between two points */
    Vector operator >= (const Point & p) const;
    Vector operator <= (const Point & p) const;

    [[nodiscard]] bool withinCone(const Point & origin, const Vector & center, double angle) const;
};

static const Point ORIGIN = Point(0, 0);

#endif //EVE_POINT_H