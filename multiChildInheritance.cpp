#include <iostream>
#include <string>
#include <limits>
using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    void inputDetails()
    {
        cout << "Enter Name: ";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        getline(cin, name);
        cout << "Enter Age: ";
        cin >> age;
        cin.ignore();
    }

    void displayDetails() const
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person
{
private:
    char grade;

public:
    void inputStudentDetails()
    {

        inputDetails();

        cout << "Enter Grade: ";
        cin >> grade;
    }

    void displayStudentDetails() const
    {
        cout << "Student Details: " << endl;
        displayDetails();
        cout << "Grade: " << grade << endl;
    }
};
class Employee : public Person
{
    int salary;

public:
    void setEmployeeDetails();
    void displayEmployeeDetails();
};
void Employee::setEmployeeDetails()
{
    cout << "Enter Employee Details:" << endl;
    inputDetails();
    cout << "Salary: ";
    cin >> salary;
}
void Employee::displayEmployeeDetails()
{
    cout << "Employee Details: " << endl;
    displayDetails();
    cout << "Salary: " << salary;
}
int main()
{
    Student s;
    s.inputStudentDetails();
    s.displayStudentDetails();
    Employee e;
    e.setEmployeeDetails();
    e.displayEmployeeDetails();

    return 0;
}
