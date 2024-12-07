#include <iostream>
using namespace std;

class Employee {
public:
    virtual void calculateSalary() {
        cout << "General Employee Salary." << endl;
    }
};

class PermanentEmployee : public Employee {
public:
    void calculateSalary() override { // Use `override` for clarity
        cout << "Salary for Permanent Employee." << endl;
    }
};

class ContractualEmployee : public Employee {
public:
    void calculateSalary() override { // Use `override` for clarity
        cout << "Salary for Contractual Employee." << endl;
    }
};

int main() {
    Employee *e; // Base class pointer
    PermanentEmployee pe;
    ContractualEmployee ce;

    e = &pe; // Point to PermanentEmployee object
    e->calculateSalary(); // Calls PermanentEmployee's version

    e = &ce; // Point to ContractualEmployee object
    e->calculateSalary(); // Calls ContractualEmployee's version

    return 0;
}
