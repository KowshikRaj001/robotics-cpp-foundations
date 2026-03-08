#ifndef VECTOR2_H
#define VECTOR2_H

class Vector2 {
public:
    double x;
    double y;

    Vector2(double x, double y);

    Vector2 add(const Vector2& other);
    Vector2 subtract(const Vector2& other);
    Vector2 multiply(const Vector2& other);
    double dot(const Vector2& other);
    double magnitude();
    Vector2 normalize();
};

#endif