#include "vector2.h"

Vector2::Vector2(double x, double y) {
    this->x = x;
    this->y = y;
}

Vector2 Vector2::add(const Vector2& other) {
    return Vector2(x + other.x, y + other.y);
}