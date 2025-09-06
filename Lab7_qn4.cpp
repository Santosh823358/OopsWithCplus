// Hierarchial Inheritance

#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    void getPerson(string n, int a) {
        name = n;
        age = a;
    }

    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Teacher : public Person {
public:
    int employeeID;
    string subject;

    void getTeacher(string n, int a, int id, string sub) {
        getPerson(n, a);
        employeeID = id;
        subject = sub;
    }

    void displayTeacher() {
        displayPerson(); 
        cout << "Employee ID: " << employeeID << endl;
        cout << "Subject: " << subject << endl;
    }
};

// Main
int main() {
    Teacher t;
    t.getTeacher("Pritam Purohit", 32, 501, "Mathematics");

    cout << "Teacher Details" << endl;
    t.displayTeacher();

    return 0;
}