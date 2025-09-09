// Derived classes 

#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
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
        cout << "Name: " << name << ", ID: " << empID << endl;
    }
};

class FullTimeEmployee : public Employee {
    double basicSalary, allowance;
public:
    FullTimeEmployee(string n, int id, double b, double a) : Employee(n, id) {
        basicSalary = b;
        allowance = a;
    }

    double calculateSalary() override {
        return basicSalary + allowance;
    }

    void displayDetails() override {
        Employee::displayDetails();
        cout << "Full Time Salary: " << calculateSalary() << endl;
    }
};

class PartTimeEmployee : public Employee {
    int hoursWorked;
    double hourlyRate;
public:
    PartTimeEmployee(string n, int id, int h, double r) : Employee(n, id) {
        hoursWorked = h;
        hourlyRate = r;
    }

    double calculateSalary() override {
        return hoursWorked * hourlyRate;
    }

    void displayDetails() override {
        Employee::displayDetails();
        cout << "Part Time Salary: " << calculateSalary() << endl;
    }
};

class Intern : public Employee {
    double stipend;
public:
    Intern(string n, int id, double s) : Employee(n, id) {
        stipend = s;
    }

    double calculateSalary() override {
        return stipend;
    }

    void displayDetails() override {
        Employee::displayDetails();
        cout << "Intern Stipend: " << calculateSalary() << endl;
    }
};

int main() {
    FullTimeEmployee f("Dharm", 309, 20000, 5000);
    PartTimeEmployee p("Pradip", 271, 40, 200);
    Intern i("Santosh", 273, 30000);

    f.displayDetails();
    p.displayDetails();
    i.displayDetails();

    return 0;
}
