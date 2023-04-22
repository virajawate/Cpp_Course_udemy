#include <iostream>

using namespace std;

class base
{
    public:
    base()
    {
        cout<<"Default constructor of base class"<<endl;
    }
    base(int x)
    {
        cout<<"Parameterized constructor of base class"<<x<<endl;
    }
};

class derived : public base
{
    public:
    derived() : base()
    {
        cout<<"Default constructor of derived class"<<endl;
    }
    derived(int c) : base (c)
    {
        cout<<"Parameterized constructor of derived class "<<c<<endl;
    }
};

int main()
{
    base b1;
    derived d1;

    cout<<"Going for parameterized constructor "<<endl;

    base b2(4);
    cout<<endl;
    derived d2(9);

    return 0;
}