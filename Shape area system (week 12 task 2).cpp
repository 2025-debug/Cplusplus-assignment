/*NAME:Kimani David Mungai
REG NO:CT101/G/26615/25
COURSE:Computer science year two(GROUP B)*/

#include <iostream>
using namespace std;

// Abstract base class
class Shape {
public:
    virtual void calculateArea() = 0;
};

// Derived class Circle
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) {
        radius = r;
    }

    void calculateArea() override {
        double area = 3.142 * radius * radius;
        cout << "Area of Circle = " << area << endl;
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    void calculateArea() override {
        double area = length * width;
        cout << "Area of Rectangle = " << area << endl;
    }
};

// Main function
int main() {
    // Create objects
    Circle c(7);
    Rectangle r(10, 5);

    // Base class pointer
    Shape *ptr;

    // Calculate Circle area
    ptr = &c;
    ptr->calculateArea();

    // Calculate Rectangle area
    ptr = &r;
    ptr->calculateArea();

    return 0;
}