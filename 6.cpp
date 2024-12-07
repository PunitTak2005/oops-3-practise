#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void drive() = 0; // Pure virtual function
};

class Car : public Vehicle {
public:
    void drive() override { // Override the pure virtual function
        cout << "Driving a car." << endl;
    }
};

class Bike : public Vehicle {
public:
    void drive() override { // Override the pure virtual function
        cout << "Riding a bike." << endl;
    }
};

int main() {
    Vehicle *v; // Pointer to base class
    Car c;
    Bike b;

    v = &c; // Pointing to Car object
    v->drive(); // Calls Car's drive()

    v = &b; // Pointing to Bike object
    v->drive(); // Calls Bike's drive()

    return 0;
}
