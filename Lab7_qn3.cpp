// Multiple Inheritance

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

class Student : public Person {
public:
    int rollNumber;
    string course;

    void getStudent(string n, int a, int r, string c) {
        getPerson(n, a);
        rollNumber = r;
        course = c;
    }

    void displayStudent() {
        displayPerson();
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Course: " << course << endl;
    }
};

class Sports {
public:
    string sportName;
    string achievement;

    void getSports(string s, string a) {
        sportName = s;
        achievement = a;
    }

    void displaySports() {
        cout << "Sport: " << sportName << endl;
        cout << "Achievement: " << achievement << endl;
    }
};

class SportyStudent : public Student, public Sports {
public:
    void displaySportyStudent() {
        displayStudent();  
        displaySports();    
    }
};

// Main
int main() {
    SportyStudent ss;
    ss.getStudent("Somnath", 21, 301, "BSC");
    ss.getSports("Football", "Gold Medal");

    cout << "--- Sporty Student Details ---" << endl;
    ss.displaySportyStudent();

    return 0;
}