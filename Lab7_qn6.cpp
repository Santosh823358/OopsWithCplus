#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    Person(string n = "Unknown", int a = 0) {
        name = n;
        age = a;
    }

    virtual void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Single Inheritance
class Student : public Person {
public:
    int rollNumber;
    string course;

    Student(string n = "Unknown", int a = 0, int r = 0, string c = "None")
        : Person(n, a) {
        rollNumber = r;
        course = c;
    }

    void display() override {
        Person::display();
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Course: " << course << endl;
    }
};

// Multilevel Inheritance 
class ResearchStudent : public Student {
public:
    string researchTopic;
    string guideName;

    ResearchStudent(string n = "Unknown", int a = 0, int r = 0, string c = "None",
                    string topic = "None", string guide = "None")
        : Student(n, a, r, c) {
        researchTopic = topic;
        guideName = guide;
    }

    void display() override {
        Student::display();
        cout << "Research Topic: " << researchTopic << endl;
        cout << "Guide Name: " << guideName << endl;
    }
};

// Multiple Inheritance 
class Sports {
public:
    string sportName;
    string achievement;

    Sports(string s = "None", string a = "None") {
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
    SportyStudent(string n, int a, int r, string c, string s, string ach)
        : Student(n, a, r, c), Sports(s, ach) {}

    void display() override {
        Student::display();
        displaySports();
    }
};

// Hierarchical Inheritance 
class Teacher : public Person {
public:
    int employeeID;
    string subject;

    Teacher(string n = "Unknown", int a = 0, int id = 0, string sub = "None")
        : Person(n, a) {
        employeeID = id;
        subject = sub;
    }

    void display() override {
        Person::display();
        cout << "Employee ID: " << employeeID << endl;
        cout << "Subject: " << subject << endl;
    }
};

// Hybrid Inheritance 
class TeachingAssistant : public Student, public Teacher {
public:
    int hoursPerWeek;

    TeachingAssistant(string n, int a, int r, string c,
                      int id, string sub, int hrs)
        : Student(n, a, r, c), Teacher(n, a, id, sub) {
        hoursPerWeek = hrs;
    }

    void display() override {
        Student::display(); 
        cout << "Employee ID (TA): " << employeeID << endl;
        cout << "Subject (TA): " << subject << endl;
        cout << "Hours per Week: " << hoursPerWeek << endl;
    }
};

// Main Function 
int main() {
    cout << "\n--- Person ---\n";
    Person p("Santosh", 20);
    p.display();

    cout << "\n--- Student ---\n";
    Student s("Dhram", 20, 273, "CSE");
    s.display();

    cout << "\n--- Research Student ---\n";
    ResearchStudent rs("Surendra", 21, 201, "MBBS", "Neurology", "Dr. Shivnath");
    rs.display();

    cout << "\n--- Sporty Student ---\n";
    SportyStudent ss("Shyam", 18, 301, "Science", "Football", "Gold Medal");
    ss.display();

    cout << "\n--- Teacher ---\n";
    Teacher t("Azriel", 32, 501, "OOPS");
    t.display();

    cout << "\n--- Teaching Assistant ---\n";
    TeachingAssistant ta("Nishant", 40, 401, "PHD", 601, "DBMS", 12);
    ta.display();

    return 0;
}