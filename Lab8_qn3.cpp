// Create a menu driven program that: 

#include <iostream>
#include <vector>
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

    virtual double calculateSalary() { return 0; }
    virtual void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "ID: " << empID << endl;
    }

    virtual ~Employee() {}
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
        cout << "Type: Full Time" << endl;
        cout << "Salary: " << calculateSalary() << endl;
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
        cout << "Type: Part Time" << endl;
        cout << "Salary: " << calculateSalary() << endl;
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
        cout << "Type: Intern" << endl;
        cout << "Stipend: " << calculateSalary() << endl;
    }
};

int main() {
    vector<Employee*> employees;  
    int choice;

    do {
        cout << "\n--- Employee Menu ---\n";
        cout << "1. Add Full Time Employee\n";
        cout << "2. Add Part Time Employee\n";
        cout << "3. Add Intern\n";
        cout << "4. Display All Employees\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            string name; int id; double basic, allow;
            cout << "Enter name, ID, basic salary, allowance: ";
            cin >> name >> id >> basic >> allow;
            employees.push_back(new FullTimeEmployee(name, id, basic, allow));
        }
        else if (choice == 2) {
            string name; int id, hours; double rate;
            cout << "Enter name, ID, hours worked, hourly rate: ";
            cin >> name >> id >> hours >> rate;
            employees.push_back(new PartTimeEmployee(name, id, hours, rate));
        }
        else if (choice == 3) {
            string name; int id; double stipend;
            cout << "Enter name, ID, stipend: ";
            cin >> name >> id >> stipend;
            employees.push_back(new Intern(name, id, stipend));
        }
        else if (choice == 4) {
            cout << "\n--- Employee Details ---\n";
            for (auto emp : employees) {
                emp->displayDetails();
                cout << "-----------------\n";
            }
        }
    } while (choice != 5);

    for (auto emp : employees) {
        delete emp;
    }

    return 0;
}
