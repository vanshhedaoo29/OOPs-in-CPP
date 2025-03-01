// WAP to display fibonacci series upto 6th position

#include <iostream>
using namespace std;
int main()
{
    int n, num1 , num2, sum=0;
    cout << "Fibonacci series length : ";
    cin >> n;

    cout << "Enter First No. : ";
    cin >> num1;

    cout << "Enter Second No. : ";
    cin >> num2;

    int i=1;
    do 
    {
        num1 = num2;
        num2 = sum;
        sum = num1 + num2;
        cout << sum << " ";
        i++;
    }while(i<=n);
}