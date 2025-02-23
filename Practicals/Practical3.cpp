#include <iostream>
using namespace std;
int main()
{
    int n, i;
    bool prime = true;

    cout << "Enter a number : ";
    cin >> n;

    if(n <= 1)
    {
        prime = false;
    }

    else
    {
        for(i=2 ; i<=n/2 ; i++)
        {
            if(n % i == 0)
            {
                prime = false;
            }
        }
    }

    if(prime)
    {
        cout << n << " is a Prime Number";
    }

    else
    {
        cout << n << " is not a Prime Number";
    } 
}