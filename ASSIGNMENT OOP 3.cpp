#include <iostream>
using namespace std;

class Employee
{
public:
    string name;
    int id;
    float salary;

    void input()
    {
        cout << "Enter employee name: ";
        cin >> name;

        cout << "Enter employee ID: ";
        cin >> id;

        cout << "Enter salary: ";
        cin >> salary;
    }

    void display()
    {
        cout << "\nEmployee Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Employee e;

    e.input();
    e.display();

    return 0;
}
