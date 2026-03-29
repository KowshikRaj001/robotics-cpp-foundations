#include "Matrix2D.h"
#include <iostream>
#include <cmath>
#include <stdexcept>

// Constructors
Matrix2D::Matrix2D() {
    m[0][0] = 0; m[0][1] = 0;
    m[1][0] = 0; m[1][1] = 0;
}

Matrix2D::Matrix2D(double a, double b, double c, double d) {
    m[0][0] = a; m[0][1] = b;
    m[1][0] = c; m[1][1] = d;
}

// Identity
Matrix2D Matrix2D::identity() {
    return Matrix2D(1, 0, 0, 1);
}

// Matrix multiplication
Matrix2D Matrix2D::operator*(const Matrix2D& other) const {
    return Matrix2D(
        m[0][0]*other.m[0][0] + m[0][1]*other.m[1][0],
        m[0][0]*other.m[0][1] + m[0][1]*other.m[1][1],
        m[1][0]*other.m[0][0] + m[1][1]*other.m[1][0],
        m[1][0]*other.m[0][1] + m[1][1]*other.m[1][1]
    );
}

// Matrix * Vector
Vector2D Matrix2D::operator*(const Vector2D& v) const {
    return Vector2D(
        m[0][0]*v.x + m[0][1]*v.y,
        m[1][0]*v.x + m[1][1]*v.y
    );
}

// Determinant
double Matrix2D::determinant() const {
    return m[0][0]*m[1][1] - m[0][1]*m[1][0];
}

// Inverse
Matrix2D Matrix2D::inverse() const {
    double det = determinant();
    if (det == 0) {
        throw std::runtime_error("Matrix not invertible");
    }

    return Matrix2D(
        m[1][1]/det,
        -m[0][1]/det,
        -m[1][0]/det,
        m[0][0]/det
    );
}

// Rotation matrix
Matrix2D Matrix2D::rotation(double angle) {
    double c = std::cos(angle);
    double s = std::sin(angle);

    return Matrix2D(
        c, -s,
        s,  c
    );
}

// Print
void Matrix2D::print() const {
    std::cout << "[" << m[0][0] << " " << m[0][1] << "]\n";
    std::cout << "[" << m[1][0] << " " << m[1][1] << "]\n";
}