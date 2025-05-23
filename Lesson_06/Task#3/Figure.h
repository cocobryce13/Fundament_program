#pragma once
#include <iostream>
#include <string>

class Figure {
public:
    virtual void print() = 0;
};

class Triangle : public Figure {
public:
    Triangle(int a, int b, int c, int A, int B, int C);
    void print() override;

protected:
    std::string figure = "Triangle: ";
    std::string side = "Side: ";
    std::string angles = "Angles: ";
    int a, b, c;
    int A, B, C;
};

class Right_triangle : public Triangle {
public:
    Right_triangle(int a, int b, int c, int A, int B);
    void print() override;

private:
    std::string figure = "Right_triangle: ";
    const int C = 90;
};

class Isosceles_triangle : public Triangle {
public:
    Isosceles_triangle(int a, int b, int A, int B);
    void print() override;

private:
    std::string figure = "Isosceles_triangle: ";
};

class Equilateral_triangle : public Triangle {
public:
    Equilateral_triangle(int a);
    void print() override;

private:
    std::string figure = "Equilateral_triangle: ";
};

class Quadrangle : public Figure {
public:
    Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D);
    void print() override;

protected:
    std::string figure = "Quadrangle: ";
    std::string side = "Side: ";
    std::string angles = "Angles: ";
    int a, b, c, d;
    int A, B, C, D;
};

class Parallelogram : public Quadrangle {
public:
    Parallelogram(int a, int b, int A, int B);
    void print() override;

private:
    std::string figure = "Parallelogram: ";
};

class Rectangle : public Parallelogram {
public:
    Rectangle(int a, int b);
    void print() override;

private:
    std::string figure = "Rectangle: ";
};

class Rhombus : public Parallelogram {
public:
    Rhombus(int a, int A, int B);
    void print() override;

private:
    std::string figure = "Rhombus: ";
};

class Square : public Rhombus {
public:
    Square(int a);
    void print() override;

private:
    std::string figure = "Square: ";
};