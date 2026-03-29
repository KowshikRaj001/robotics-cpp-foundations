#ifndef MATRIX2D_H
#define MATRIX2D_H

#include "Vector2D.h"

class Matrix2D {
public:
    double m[2][2];

    // Constructors
    Matrix2D();
    Matrix2D(double a, double b, double c, double d);

    // Static identity
    static Matrix2D identity();

    // Operator overloading
    Matrix2D operator*(const Matrix2D& other) const;
    Vector2D operator*(const Vector2D& v) const;

    // Determinant
    double determinant() const;

    // Inverse
    Matrix2D inverse() const;

    // Rotation matrix
    static Matrix2D rotation(double angle);

    // Print
    void print() const;
};

#endif