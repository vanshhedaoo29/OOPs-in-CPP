#include <iostream>
using namespace std;

class Student
{
    private:
    int roll_no;
    string name;

    public:
    Student()
    {
        roll_no = 10;
        name = "Vansh";
    }

    Student(int r, string n)
    {
        roll_no = r;
        name = n;
    }

    Student(const Student &S)
    {
        roll_no = S.roll_no;
        name = S.name;
    }

    void display()
    {
        cout << "Roll No. : " << roll_no << endl;
        cout << "Name : " << name << endl;
    }
};

int main()
{
    Student s1;
    cout << "Default Constructor : "<< endl;
    s1.display();

    cout << "Parameterised Constructor : "<< endl;
    Student s2(136, "Vansh");
    s2.display();

    cout << "Copy Constructor : "<< endl;
    Student s3(s2);
    s3.display();
}