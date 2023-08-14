#include <iostream>

using namespace std;

class base
{
public:
    ~base()
    {
        cout << "Base Class is destroyed" << endl;
    }
};

class derived : public base
{
public:
    ~derived()
    {
        cout << "Derived Class is Destroyed" << endl;
    }
};

class base2
{

public:
    virtual ~base2()
    {
        cout << "Second Base Class is destroyed" << endl;
    }
};

class derived2 : public base2
{
public:
    ~derived2()
    {
        cout << "Second Derived Class is Destroyed" << endl;
    }
};

int main()
{
    base *ptr = new derived;
    base2 *ptr2 = new derived2;
    delete ptr;
    delete ptr2;
    return 0;
}