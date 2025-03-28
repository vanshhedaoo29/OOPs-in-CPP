#include <iostream>
using namespace std;

class Counter
{
    static int count;
    int id;

    public:
    Counter()
    {
        count++;
        id = count;
        cout << "\nObject " << id << " Created";
    }

    ~Counter()
    {
        cout << "\nObject " << id << " Destroyed";
    }

    static int showcount()
    {
        return count;
    }
};

int Counter :: count = 0;

int main()
{
    Counter c1,c2,c3;
    cout << "\nTotal Objects = " << Counter :: showcount();
    return 0;
}

/*
Output:
Object 1 Created
Object 2 Created
Object 3 Created
Total Objects = 3
Object 3 Destroyed
Object 2 Destroyed
Object 1 Destroyed
*/