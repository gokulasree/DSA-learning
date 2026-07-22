#include <iostream>
using namespace std;

// Dynamic data members
class Student {
public:
    string name;
    int *marks;

    // Parameterized constructor
    Student(string name, int marks) {
        this->name = name;
        this->marks = new int(marks);
    }

    // Copy constructor (Shallow Copy)
    Student(Student &st) {
        this->name = st.name;
        this->marks = st.marks;   // Both objects point to the same memory
        cout << "Copy constructor called" << endl;
    }

    // Methods
    void eat() {
        cout << "Student eats" << endl;
    }

    void study() {
        cout << "Student studies" << endl;
    }

    void sleep() {
        cout << "Student sleeps" << endl;
    }
};

int main() {

    Student s1("Hari", 90);

    // Calling custom copy constructor
    Student s2(s1);

    cout << "Before changing marks" << endl;
    cout << "s1 Name  : " << s1.name << endl;
    cout << "s1 Marks : " << *s1.marks << endl;

    cout << "s2 Name  : " << s2.name << endl;
    cout << "s2 Marks : " << *s2.marks << endl;

    // Changing marks using s2
    *s2.marks = 100;

    cout << "\nAfter changing s2 marks" << endl;
    cout << "s1 Marks : " << *s1.marks << endl;
    cout << "s2 Marks : " << *s2.marks << endl;

    return 0;
}