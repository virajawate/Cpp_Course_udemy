#include <iostream>

using namespace std;

class base
{
public:
    void get()
    {
        cout << "Base class" << endl;
    }
    virtual void line()
    {
        cout << "Virtual base class" << endl;
    }
};

class derived1 : public base
{
public:
    void get()
    {
        cout << "First derived class" << endl;
    }
    void line()
    {
        cout << "First derived class from virtual" << endl;
    }
};

class derived2 : public base
{
public:
    void get()
    {
        cout << "Second derived class" << endl;
    }
    void line()
    {
        cout << "Second derived class from virtual" << endl;
    }
};

int main()
{
    derived1 drv1;
    derived2 drv2;

    base *bse;
    bse = &drv1;

    bse->get();
    bse->line();

    bse = &drv2;

    bse->get();
    bse->line();

    return 0;
}