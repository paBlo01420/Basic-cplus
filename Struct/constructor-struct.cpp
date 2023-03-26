#include <iostream>
using namespace std;
 
struct Person {
    string name;
    int age;
    char gender;
 
    void print() {
        cout << age << " - ";
        cout << name << " - ";
        cout << gender << endl;
    }
};
 
struct Student : Person {
    int RollNo;
    string department;
 
    Student(string name, int age, char gender, int roll, string dept) 
    {
        this->name = name;
        this->age = age;
        this->gender = gender;
        this->RollNo = roll;
        this->department = dept;
    }
};
 
int main() {
    Student s1 = Student( "Bob", 15, 'M', 146, "IT" );
    Student s2 = Student("Janet", 17, 'F', 109, "Medical");
 
    s1.print();
    s2.print();
}
