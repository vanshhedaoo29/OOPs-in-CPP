#include <iostream>
using namespace std;

class student
{
    private:
    int roll_no;
    string name;

    public:
    student()               // Default Constructor
    {
        roll_no = 12;
        name = "Vansh";
    }

    student(int r, string n)       // Parameterized Constructor
    {
        roll_no = r;
        name = n;
    }

    student(const student &S)     // Copy Constructor 
    {
        cout << "\nCopy Constructor Invoked";
        roll_no = S.roll_no;
        name = S.name;
        
    }

    void display()
    {
        cout << "\nRoll No. : " << roll_no << endl;
        cout << "Name : " << name ;
    }
};

int main()
{
    student s1;
    cout << "Default Constructor Invoked";
    s1.display();

    student s2(136, "Vansh");
    cout << "\nParameterised Constructor Invoked";
    s2.display();

    student s3(s2);
    s3.display();
}