#include <iostream>
using namespace std;

class Person
{
    private:
    string name;
    int age;

    public:
    void Set_P()
    {
        cout << "Enter Name : ";
        getline(cin, name);  // Read full name including spaces

        cout << "Enter Age : ";
        cin >> age;
    }

    void Put_P()
    {
        cout << "Name : " << name;
        cout << "\nAge : " << age;
    }
};

class Student : private Person
{
    private:
    string course;

    public:
    void Set_S()
    {
        Set_P();
        cout << "Enter Course : ";
        cin.ignore();    // Ignore any leftover newline character
        getline(cin, course);  // Read full course name including spaces
    }

    void Put_S()
    {
        Put_P();
        cout << "\nCourse : " << course;
    }
};

int main()
{
    Student s1;

    s1.Set_S();

    cout << "Student Information is : \n";

    s1.Put_S();
    return 0;
}