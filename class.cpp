#include <iostream>
#include <string>
using namespace std;

class Teacher{
    // properties or attributes
private:
    double salary;

public:    
    string name;
    string dept;
    string subject;

    // methods or member function
    void changeDept(string newDept){
        dept = newDept;
    }

    // setter
    void setSalary(double s) {
        salary = s;
    }

    // getter
    double getSalary(){
        return salary;
    }
};

int main()
{
    Teacher t1;
    t1.name = "Vansh Hedaoo";
    t1.subject = "C++";
    t1.dept = "Computer Science & Engineering";
    t1.setSalary(60000);

    cout << t1.name << endl;
    cout << t1.getSalary() << endl;
}