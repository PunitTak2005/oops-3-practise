#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() {
        cout << "Undefined area." << endl;
    }
};

class Circle : public Shape {
public:
    void area() override { // Use 'override' for clarity
        cout << "Area of Circle: πr²." << endl;
    }
};

class Rectangle : public Shape {
public:
    void area() override { // Use 'override' for clarity
        cout << "Area of Rectangle: l × w." << endl;
    }
};

int main() {
    Shape *s;
    Circle c;
    Rectangle r;

    s = &c; // Pointing to Circle object
    s->area(); // Calls Circle's area()

    s = &r; // Pointing to Rectangle object
    s->area(); // Calls Rectangle's area()

    return 0;
}
