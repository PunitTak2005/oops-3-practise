#include <iostream>
using namespace std;

class Animal {
public:
    void sound() {
        cout << "Animal makes a sound." << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks." << endl;
    }
};

class Puppy : public Dog {
public:
    void cuteAction() {
        cout << "Puppy wags its tail." << endl;
    }
};

int main() {
    Puppy p;
    p.sound();       // Accessing the method from Animal
    p.bark();        // Accessing the method from Dog
    p.cuteAction();  // Accessing the method from Puppy
    return 0;
}
