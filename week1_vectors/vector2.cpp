#include "vector2.h"

Vector2::Vector2(double x, double y) {
    this->x = x;
    this->y = y;
}

Vector2 Vector2::add(const Vector2& other) {
    return Vector2(x + other.x, y + other.y);
}

Vector2 Vector2::subtract(const Vector2& other) {
    return Vector2(x - other.x, y - other.y);
}

Vector2 Vector2::multiply(const Vector2& other) {
    return Vector2(x * other.x, y * other.y);
}

double Vector2::dot(const Vector2& other) {
    return (x * other.x + y * other.y);
}

double Vector2::magnitude() {
    return std::sqrt(x * x + y * y);
}

Vector2 Vector2::normalize() {
    double mag = magnitude();
    if (mag == 0) {
        return Vector2(0, 0);
    }
    return Vector2(x / mag, y / mag);
}
