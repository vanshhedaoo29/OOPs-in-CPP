// WAP to display square upto entered number

#include <iostream>
using namespace std;
int main()
{
    int n;

    cout << "Enter no. : ";
    cin >> n;

    int i = 1;
    while(i <= n)
    {
        cout << i*i << "  " ;
        i++;
    }
}