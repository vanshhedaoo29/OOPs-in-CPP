#include <iostream>
using namespace std;
int main()
{
    int a[10], i, j, temp = 0;

    cout << "Enter Array Elements : \n";
    for (i=0 ; i<10 ; i++)
    {
        cin >> a[i];
    }

    cout << "Array Elements are : \n";
    for (i=0 ; i<10 ; i++)
    {
        cout << a[i] << " ";
    }

    cout << "\nArray Elements in Ascending Order : \n";
    for (i=0 ; i<10 ; i++)
    {
        for (j=i+1 ; j<10 ; j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    
    for (i=0 ; i<10 ; i++)
    {
        cout << a[i] << " ";
    }
}