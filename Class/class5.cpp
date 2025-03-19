#include <iostream>
using namespace std;

class Student
{
    private:                            // Data member declaration
    int roll_no;
    string name;
    static string dept;

    public:
    void getdata()                         // Input data
    {
        cout << "Enter Roll No. : ";
        cin >> roll_no;
        cout << "Enter Name : ";
        cin >> name;
    }

    void display()                         // Output data
    {
        cout << "Roll No. : " << roll_no << endl;
        cout << "Name : " << name << endl;
        cout << "Department : " << dept << endl;
    }

    static void setDepartment(string d)     // Static Member Function
    {
        dept = d;
    }
    
};
string Student :: dept;        // Initialize Static Member


int main()
{
    Student s1, s2;
    Student::setDepartment("Computer Science and Engineering");

    cout << "Enter data of Student 1" << endl;
    s1.getdata();
    cout << "Enter data of Student 2" << endl;
    s2.getdata();

    cout << "Data of Student 1" << endl;
    s1.display();
    cout << "Data of Student 2" << endl;
    s2.display();
}