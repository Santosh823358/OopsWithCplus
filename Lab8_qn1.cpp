// Base class : Employee

#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int empID;

public:
    Employee(string n, int id) {
        name = n;
        empID = id;
    }

    virtual double calculateSalary() {
        return 0;
    }

    virtual void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "ID: " << empID << endl;
    }
};

class FullTimeEmployee : public Employee {
    double salary;
public:
    FullTimeEmployee(string n, int id, double s) : Employee(n, id) {
        salary = s;
    }

    double calculateSalary() override {
        return salary;
    }

    void displayDetails() override {
        Employee::displayDetails();
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    FullTimeEmployee e1("Santosh", 273, 100000);

    e1.displayDetails();
    cout << "Calculated Salary: " << e1.calculateSalary() << endl;

    return 0;
}
