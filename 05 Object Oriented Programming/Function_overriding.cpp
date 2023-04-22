#include <iostream>

using namespace std;

class base
{
    public:
    void msg()
    {
        cout<<"This is base class Message function..."<<endl;
    }
    void msg(int x)
    {
        cout<<"This is base class message function with parmeter = "<<x<<endl;
    }
};

class derived : public base
{
    public:
    void msg()
    {
        cout<<"This is derived class Message function..."<<endl;
    }
    void msg(int x) 
    {
        cout<<"This is derived class message function with parmeter = "<<x<<endl;
    }
};



int main()
{
    base b1;
    b1.msg();
    b1.msg(5);

    cout<<"Going for derived"<<endl;

    derived d1;
    d1.msg();
    d1.msg(7);
    
    return 0;
}