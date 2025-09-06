// Single Inheritance

#include<iostream>
#include<string>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
   Person(string n, int a) {
       name = n;
       age = a;
   }

   void displayPerson() {
       cout<< "Name: " << name << endl;
       cout<< "Age: " << age << endl;
   }
};

class Student : public Person {
private:
    int rollNumber;
    string course;

public:
   Student(string n, int a, int r, string c) : Person(n,a) {
       rollNumber = r;
       course = c;
   }

   void displayStudent() {
       displayPerson();
       cout << "RollNumber: " << rollNumber << endl;
       cout << "Course: " << course << endl;
   }
};

int main() {
    Student s("Santosh Gupta", 20, 273, "Computer science");
    s.displayStudent();
    return 0;
}

