#include <iostream>
#include "Vector2D.h"
#include "Matrix2D.h"

int main() {

    Vector2D v1(3, 4);
    Vector2D v2(1, 2);

    Vector2D sum = v1 + v2;
    Vector2D diff = v1 - v2;
    Vector2D scaled = v1 * 2.0;

    std::cout << "Sum: "; sum.print();
    std::cout << "Difference: "; diff.print();
    std::cout << "Scaled: "; scaled.print();

    std::cout << "Dot: " << v1.dot(v2) << std::endl;
    std::cout << "Cross: " << v1.cross(v2) << std::endl;

    std::cout << "Magnitude v1: " << v1.magnitude() << std::endl;

    std::cout << "Angle: " << v1.angle(v2) << std::endl;

    Vector2D proj = v1.projectOnto(v2);
    std::cout << "Projection of v1 onto v2: ";
    proj.print();

    Vector2D v(1, 0);

    Matrix2D rot = Matrix2D::rotation(3.14159 / 2); // 90 degrees

    Vector2D result = rot * v;

    std::cout << "Rotated vector: ";
    result.print();

    Matrix2D m1(1, 2, 3, 4);
    Matrix2D m2 = Matrix2D::identity();

    Matrix2D product = m1 * m2;

    std::cout << "Matrix product:\n";
    product.print();

    return 0;
}