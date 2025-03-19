#include <iostream>
using namespace std;

class student
{
    private:
    int roll_no;
    string name;
    

    public:
    // Copy constructor
    student(const student &S)
    {
        roll_no = S.roll_no;
        name = S.name;
        cout << "\nCopy Constructor Invoked";
    }

    void getdata()
    {
        cout << "\nEnter Name : ";
        cin >> name;
        cout << "Enter Roll no. : ";
        cin >> roll_no;
    }

    void display()
    {
        cout << "Name : " << name ;
        cout << "\nRoll No. : " << roll_no << endl;
    }
};

int main()
{
    student s1;                       // Invokes Default Constructor
    student s2( 14 , "Vansh");          // Invokes Parameterised Constructor
    student s3(s2);                   // Invokes Copy Constructor
    student s4;

    s4.getdata();

    cout << "Data for object s1\n";
    s1.display();

    cout << "Data for object s2\n";
    s2.display();

   
    s3.display();

    
    s4.display();

    return 0;
}