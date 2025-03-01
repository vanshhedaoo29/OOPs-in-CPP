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
};

int main()
{
    
}