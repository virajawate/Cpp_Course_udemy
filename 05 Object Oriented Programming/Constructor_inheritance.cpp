#include <iostream>

using namespace std;

class base
{
    public:
    base()
    {
        cout<<"Default Constructor of the base class"<<endl;
    }
    base(int x)
    {
        cout<<"Para construct of base class with "<<x<<endl;
    }
};

class derived : public base
{
    //Empty
};

class derived_para : public base
{
    public:
    derived_para()
    {
        //With-out Parameter
        cout<<"Derived function without parameter"<<endl;
    }
    derived_para(int x)
    {
        //With Parameter
        cout<<x<<"Derived function with parameter "<<endl;
    }
};

int main()
{
    /**
     * @brief Derived class from Base class
     * Derived class from base class without parameter
     * Derived class from base class with parameter
     * Derived class with parameter calls base class without parameter 
     * and then calls function with parameter from derived class
     */
    derived d;
    cout<<"Calling derived class with parameters"<<endl;
    derived_para d_p(7);
    return 0;
}