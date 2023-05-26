#include <iostream>

using namespace std;

class base
{
public:
    // ~base()
    // {
    //     cout<<"Base Class Deleted"<<endl;
    // }

    // virtual keyword
    virtual ~base()
    {
        cout << "Base Class Deleted" << endl;
    }
};

class derived : public base
{
public:
    ~derived()
    {
        cout << "Derived Class deleted" << endl;
    }
};

int main()
{
    base *b1 = new derived;

    // It first deletes derived class then base class.
    delete b1;

    return 0;
}