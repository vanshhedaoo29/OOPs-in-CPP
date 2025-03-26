// Performing Jump Statements ( Continue , Break , Return )

#include <iostream>
using namespace std;
int main()
{
    int i;

    cout << "Performing Continue Jump Statement :" << endl;
    for (i = 0; i < 10; i++)
    {
        if (i == 4)
        {
            continue;
        }
        cout << i << " ";
    }

    cout << "\nPerforming Break Jump Statement :" << endl;
    for (i = 0; i < 10; i++)
    {
        if (i == 6)
        {
            break;
        }
        cout << i << " ";
    }
    
    cout << "\nPerforming Return Jump Statement :" << endl;
    for (i = 0; i < 4; i++)
    {
        if (i == 4)
        {
            return i;
        }
        cout << i << " ";
    }

    return 0;
}