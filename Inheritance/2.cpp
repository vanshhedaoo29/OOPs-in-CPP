// Single Level Inheritance Example 2

#include <iostream>
using namespace std;

class Person
{
    protected:
    string name;
    int age;
};

class Student : private Person
{
    private:
    string course;

    public:
    void Set_S()
    {
        cout << "Enter Name : ";
        getline(cin, name);          // Read full name including spaces
        cout << "Enter Age : ";
        cin >> age;
        cout << "Enter Course : ";
        cin.ignore();    // Ignore any leftover newline character
        getline(cin, course);  // Read full course name including spaces
    }

    void Put_S()
    {
        cout << "Name : " << name;
        cout << "\nAge : " << age;
        cout << "\nCourse : " << course;
    }

};

int main()
{
    Student s;
    s.Set_S();

    cout << "Student Information : \n";
    s.Put_S();
    return 0;
}