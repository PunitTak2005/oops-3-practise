#include <iostream>
using namespace std;

class Appliance {
public:
    virtual void powerUsage() = 0; // Pure virtual function
};

class Fan : public Appliance {
public:
    void powerUsage() override { // Override the pure virtual function
        cout << "Fan uses 70W." << endl;
    }
};

class WashingMachine : public Appliance {
public:
    void powerUsage() override { // Override the pure virtual function
        cout << "Washing Machine uses 500W." << endl;
    }
};

int main() {
    Appliance *a; // Pointer to base class
    Fan f;
    WashingMachine wm;

    a = &f; // Pointing to Fan object
    a->powerUsage(); // Calls Fan's powerUsage()

    a = &wm; // Pointing to WashingMachine object
    a->powerUsage(); // Calls WashingMachine's powerUsage()

    return 0;
}
