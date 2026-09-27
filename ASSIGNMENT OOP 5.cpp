
#include <iostream>
using namespace std;

class Student
{
public:
    int id;
    string name;
    char grade;

    Student(int id, string name, char grade)
    {
        this->id = id;
        this->name = name;
        this->grade = grade;
    }

    void display()
    {
        cout << "\nStudent ID    : " << id << endl;
        cout << "Student Name  : " << name << endl;
        cout << "Student Grade : " << grade << endl;
        cout << "------------------------";
    }
};

int main()
{
    Student s1(12349991, "Rohit", 'X');
    Student s2(12349992, "Sachin", 'Y');
    Student s3(12349993, "Virat", 'Z');

    s1.display();
    s2.display();
    s3.display();
    return 0;
}
