#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // Parameterized Constructor
    Student(string n, int a) {
        name = n;
        age = a;
    }

    // Setter Methods
    void setName(string n) {
        name = n;
    }

    void setAge(int a) {
        age = a;
    }

    // Getter Methods
    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    // Display Method
    void display() {
        cout << "Name : " << name << endl;
        cout << "Age  : " << age << endl;
    }
};

int main() {
    Student s1("Hari", 20);

    cout << "Initial Details:" << endl;
    s1.display();

    // Changing values using setter methods
    s1.setName("Rahul");
    s1.setAge(21);

    cout << "\nAfter Updating:" << endl;
    cout << "Name : " << s1.getName() << endl;
    cout << "Age  : " << s1.getAge() << endl;

    return 0;
}