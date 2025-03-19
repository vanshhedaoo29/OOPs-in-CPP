#include <iostream>
using namespace std;

class student
    {
        public :
        int roll_no;
        string name;

        void display()
        {
            cout << "Roll No. : " << roll_no ;
            cout << "\nName : " << name ;
        }
    };

int main()
{
    student s;               // Create Object

    s.roll_no = 136;
    s.name = "Vansh Hedaoo";

    s.display();            // Message (Calling a function)
    return 0;
}