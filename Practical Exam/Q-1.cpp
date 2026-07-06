#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int rollNumber;

public:
    // Parameterized Constructor
    Student(string n, int r)
    {
        name = n;
        rollNumber = r;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }
};

int main()
{
    // Array of Objects
    Student s[3] = {
        Student("Shriya", 101),
        Student("Siya", 102),
        Student("Riya", 103)};

    cout << "Student Details" << endl;

    for (int i = 0; i < 3; i++)
    {
        s[i].display();
        cout << endl;
    }

    return 0;
}