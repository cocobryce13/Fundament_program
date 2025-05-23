#include<iostream>
#include "Figure.h"

//  // Треугольник
Triangle::Triangle(int a, int b, int c, int A, int B, int C) : a(a), b(b), c(c), A(A), B(B), C(C) {}
void Triangle::print() {
    std::cout << figure << "\n" << side << a << " " << b << " " << c << std::endl;
    std::cout << angles << A << " " << B << " " << C << std::endl;
}

// Прямоугольный треугольник
Right_triangle::Right_triangle(int a, int b, int c, int A, int B) : Triangle(a, b, c, A, B, 90) {}
void Right_triangle::print() {
    std::cout << figure << "\n" << side << a << " " << b << " " << c << std::endl;
    std::cout << angles << A << " " << B << " " << C << std::endl;
}

// Равнобедренный треугольник
Isosceles_triangle::Isosceles_triangle(int a, int b, int A, int B) : Triangle(a, b, a, A, B, A) {}
void Isosceles_triangle::print() {
    std::cout << figure << "\n" << side << a << " " << b << " " << c << std::endl;
    std::cout << angles << A << " " << B << " " << C << std::endl;
}

// Равносторонний треугольник
Equilateral_triangle::Equilateral_triangle(int a) : Triangle(a, a, a, 60, 60, 60) {}
void Equilateral_triangle::print() {
    std::cout << figure << "\n" << side << a << " " << b << " " << c << std::endl;
    std::cout << angles << A << " " << B << " " << C << std::endl;
}

// Четырёхугольник
Quadrangle::Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D) : a(a), b(b), c(c), d(d), A(A), B(B), C(C), D(D) {}
void Quadrangle::print() {
    std::cout << figure << "\n" << side << a << " " << b << " " << c << " " << d << std::endl;
    std::cout << angles << A << " " << B << " " << C << " " << D << std::endl;
}

// Параллелограмм
Parallelogram::Parallelogram(int a, int b, int A, int B) : Quadrangle(a, b, a, b, A, B, A, B) {}
void Parallelogram::print() {
    std::cout << figure << "\n" << side << a << " " << b << " " << c << " " << d << std::endl;
    std::cout << angles << A << " " << B << " " << C << " " << D << std::endl;
}

// Прямоугольник
Rectangle::Rectangle(int a, int b) : Parallelogram(a, b, 90, 90) {}
void Rectangle::print() {
    std::cout << figure << "\n" << side << a << " " << b << " " << c << " " << d << std::endl;
    std::cout << angles << A << " " << B << " " << C << " " << D << std::endl;
}

// Ромб
Rhombus::Rhombus(int a, int A, int B) : Parallelogram(a, a, A, B) {}
void Rhombus::print() {
    std::cout << figure << "\n" << side << a << " " << b << " " << c << " " << d << std::endl;
    std::cout << angles << A << " " << B << " " << C << " " << D << std::endl;
}

// Квадрат
Square::Square(int a) : Rhombus(a, 90, 90) {}
void Square::print() {
    std::cout << figure << "\n" << side << a << " " << b << " " << c << " " << d << std::endl;
    std::cout << angles << A << " " << B << " " << C << " " << D << std::endl;
}
