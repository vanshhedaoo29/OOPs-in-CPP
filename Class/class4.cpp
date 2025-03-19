#include <iostream>
using namespace std;

class Student
{
    private:
    int roll_no;
    string name;

    public:
    void getdata()
    {
        cout << "Enter Name : ";
        cin >> name;
        cout << "Enter Roll no. : ";
        cin >> roll_no;
    }

    void setdata()
    {
        cout << "Name : " << name ;
        cout << "\nRoll No. : " << roll_no << endl;
    }
};

int main()
{
    int n , i;
    Student s[10];

    cout << "Enter the number of students : ";
    cin >> n;

    for(i=0 ; i<n ; i++)
    {
        cout << "Enter data of student " << i+1 << " :\n";
        s[i].getdata();
    }

    for(i=0 ; i<n ; i++)
    {
        cout << "Data of student " << i+1 << " :\n";
        s[i].setdata();
    }
}