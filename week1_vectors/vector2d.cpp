#include <iostream>
#include "vector2.h"

int main() {
    Vector2 a(2,3);
    Vector2 b(4,5);

    Vector2 c = a.add(b);

    std::cout << c.x << " " << c.y << std::endl;

    return 0;
}