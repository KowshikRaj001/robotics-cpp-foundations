#include "Transform2D.h"

// Default constructor
Transform2D::Transform2D()
    : rotation(Matrix2D::identity()), translation(0, 0) {}

// Parameterized constructor
Transform2D::Transform2D(const Matrix2D& r, const Vector2D& t)
    : rotation(r), translation(t) {}

// Apply transformation
Vector2D Transform2D::apply(const Vector2D& v) const {
    return rotation * v + translation;
}

// Combine transformations
Transform2D Transform2D::operator*(const Transform2D& other) const {
    Matrix2D newRot = rotation * other.rotation;
    Vector2D newTrans = rotation * other.translation + translation;

    return Transform2D(newRot, newTrans);
}