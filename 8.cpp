#include <iostream>
using namespace std;

class ClassA {
public:
    ClassA() {
        cout << "Constructor of ClassA." << endl;
    }
    ~ClassA() {
        cout << "Destructor of ClassA." << endl;
    }
};

class ClassB : public ClassA {
public:
    ClassB() {
        cout << "Constructor of ClassB." << endl;
    }
    ~ClassB() {
        cout << "Destructor of ClassB." << endl;
    }
};

class ClassC : public ClassB {
public:
    ClassC() {
        cout << "Constructor of ClassC." << endl;
    }
    ~ClassC() {
        cout << "Destructor of ClassC." << endl;
    }
};

int main() {
    ClassC obj; // Create an object of ClassC
    return 0;   // Destructors will be called when the object goes out of scope
}
