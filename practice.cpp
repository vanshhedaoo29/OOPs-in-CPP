#include <iostream>
using namespace std;

class Student
{
    private:
    int roll_no;
    string name;
    static string dept;

    public:
    static void setDepartment(string d)
    {
        dept = d;
    }

    void getdata()
    {
        cout << "Enter Roll No. : ";
        cin >> roll_no;
        cout << "Enter Name : ";
        cin >> name;
    }

    void display()
    {
        cout << "Roll No. : " << roll_no << endl;
        cout << "Name : " << name << endl;
        cout << "Department : " << dept << endl;
    }
};
string Student :: dept;
int main()
{
    Student::setDepartment("Computer Science and Engineering");

    Student s1, s2;

    cout << "Enter data for Student 1 : " << endl;
    s1.getdata();

    cout << "Enter data for Student 2 : " << endl;
    s2.getdata();

    cout << "Data for Student 1 : " << endl;
    s1.display();

    cout << "Data for Student 2 : " << endl;
    s1.display();
}