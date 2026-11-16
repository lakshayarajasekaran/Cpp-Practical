#include <iostream>
using namespace std;

class Shape {
public:
    virtual float area() const = 0;  // Pure virtual function
    virtual ~Shape() = default;     // Virtual destructor
};

class Circle : public Shape {
private:
    float radius

public:
    explicit Circle(float r) : radius(r) {}

    float area() const override {
        return 3.14f * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    float length;
    float breadth;

public:
    Rectangle(float l, float b) : length(l), breadth(b) {}

    float area() const override {
        return length * breadth;
    }
};

class Triangle : public Shape {
private:
    float base;
    float height;

public:
    Triangle(float b, float h) : base(b), height(h) {}

    float area() const override {
        return 0.5f * base * height;
    }
};

int main() {
    Circle circle(5);
    Rectangle rectangle(4, 6);
    Triangle triangle(10, 8);

    Shape* shape = &circle;
    cout << "Area of Circle: " << shape->area() << endl;

    shape = &rectangle;
    cout << "Area of Rectangle: " << shape->area() << endl;

    shape = &triangle;
    cout << "Area of Triangle: " << shape->area() << endl;

    return 0;
}