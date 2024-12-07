#include <iostream>
using namespace std;

// Base class
class Entity {
public:
    void display() { 
        cout << "Entity information." << endl; 
    }
};

// Derived classes with virtual inheritance
class LivingBeing : virtual public Entity {};
class NonLivingBeing : virtual public Entity {};

// Final derived class
class Robot : public LivingBeing, public NonLivingBeing {};

int main() {
    Robot r;
    r.display(); // No ambiguity due to virtual inheritance
    return 0;
}
