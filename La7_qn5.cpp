// Hybrid Inheritance

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

class TeachingAssistant : public Student, public Teacher {
public:
    int hoursPerWeek;

    void getTeachingAssistant(string n, int a, int r, string c,
                              int id, string sub, int hrs) {
        Student::getStudent(n, a, r, c);
        Teacher::getTeacher(n, a, id, sub);
        hoursPerWeek = hrs;
    }

    void displayTeachingAssistant() {
        Student::displayStudent();  
        cout << "Employee ID: " << Teacher::employeeID << endl;
        cout << "Subject: " << Teacher::subject << endl;
        cout << "Hours per Week: " << hoursPerWeek << endl;
    }
};

// Main
int main() {
    TeachingAssistant ta;
    ta.getTeachingAssistant("Pradip", 22, 271, "BTech", 601, "Programming", 12);

    cout << "--- Teaching Assistant Details ---" << endl;
    ta.displayTeachingAssistant();

    return 0;
}