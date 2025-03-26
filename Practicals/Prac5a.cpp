// Performing Jump Statements ( Continue , Break , Goto )

#include <iostream>
using namespace std;
int main()
{
    int i;
    cout << "Performing Goto Jump Statement :" << endl;
    Hello: cout << "Hello my Friends." << endl;

    cout << "Performing Continue Jump Statement :" << endl;
    for(i=0 ; i<5 ; i++)
    {
        if(i==2)
        {
            continue;
        }
        cout << i << endl;
    }
    cout << endl;

    cout << "Performing Break Jump Statement :" << endl;
    for(i=0 ; i<5 ; i++)
    {
        if(i==2)
        {
            break;;
        }
        cout << i << endl;
    }
    cout << endl;

    return 0;

    goto Hello;
}