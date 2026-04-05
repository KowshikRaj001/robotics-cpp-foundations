#ifndef TRANSFORM2D_H
#define TRANSFORM2D_H

#include "Matrix2D.h"
#include "Vector2D.h"

class Transform2D {
public:
    Matrix2D rotation;
    Vector2D translation;

    Transform2D();
    Transform2D(const Matrix2D& r, const Vector2D& t);

    Vector2D apply(const Vector2D& v) const;

    Transform2D operator*(const Transform2D& other) const;
};

#endif