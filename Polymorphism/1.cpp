// Static / Compile time Polymorphism

// Program for Static Function Overloading

#include <iostream>
using namespace std;

// Function overloading
void display();
void display(int);
void display(float);
void display(int, float);

int main()
{
    // Correct function calls
    display();
    display(10);
    display(15.5F);  // Use 'f/F' to explicitly declare float
    display(20, 30.5F);

    return 0;
}

// Function definitions
void display()
{
    cout << "a = " << 100;
}

void display(int t)
{
    cout << "\nb = " << t;
}

void display(float s)
{
    cout << "\nc = " << s;
}

void display(int u, float v)
{
    cout << "\nd = " << u;
    cout << "\ne = " << v;
}