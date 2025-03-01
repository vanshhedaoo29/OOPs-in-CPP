// Wap to calculate multiplication table of entered number

#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout << "Enter no. for multiplication table : ";
    cin >> n;

    for(i=1 ; i<=10 ; i++)
    {
        cout << n << " * " << i << " = " << n*i << endl;
    }
}