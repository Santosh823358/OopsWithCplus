// Multilevel Inheritance

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
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
private:
    int rollNumber;
    string Course;

public:
    Student(string n, int a, int r, string c) : Person(n, a) {
        rollNumber = r;
        Course = c;
    }

    void dispalyStudent() {
        displayPerson();
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Course: " << Course << endl;
    }
};

class ResearchStudent : public Student {
private:
    string researchTopic;
    string guideName;

public:
    ResearchStudent(string n, int a, int r, string c, string topic, string guide)
     : Student(n, a, r, c) {
        researchTopic = topic;
        guideName = guide;
    }

    void dispalyResearchStudent() {
        displayStudent();
        cout << "Research Topic: " << researchTopic << endl;
        cout << "Guide Name: " << guideName << endl; 

    }
};

int main() {
    ResearchStudent rs("Santosh", 20, 273, "CSE", "Java", "DR. Azriel Henry");
    rs.dispalyResearchStudent();
    return 0;
}