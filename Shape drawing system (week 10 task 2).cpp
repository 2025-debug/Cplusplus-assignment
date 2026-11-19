/*NAME:Kimani David Mungai
REG NO:CT101/G/26615/25
COURSE:Computer science year two(GROUP B)*/

#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    virtual void draw() {
        cout << "Drawing Shape" << endl;
    }
};

// Derived class Circle
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing Rectangle" << endl;
    }
};

// Derived class Triangle
class Triangle : public Shape {
public:
    void draw() override {
        cout << "Drawing Triangle" << endl;
    }
};

int main() {
    Shape *ptr;

    Circle c;
    Rectangle r;
    Triangle t;

    ptr = &c;
    ptr->draw();

    ptr = &r;
    ptr->draw();

    ptr = &t;
    ptr->draw();

    return 0;
}