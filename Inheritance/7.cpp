// Hybrid Inheritance Example 1

#include<iostream>
using namespace std;

class A
{
    protected:
    int x;
};

class B : protected virtual A
{

};

class C : protected virtual A
{

};

class D : protected B, protected C
{
    public:
    void Set_X()
    {
        cout << "Enter x : ";
        cin >> x;
    }

    void Put_X()
    {
        cout << "x : " << x;
    }
};

int main()
{
    D obj;
    obj.Set_X();

    cout << "Output : \n";
    obj.Put_X();
    
}