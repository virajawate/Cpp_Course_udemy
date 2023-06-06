#include <iostream>

class A
{
    public:
    A()
    {
        std::cout<<"Constructor"<<std::endl;
        var++;
        std::cout<<"Static member"<<var<<"now increment"<<std::endl;
    }

    static int var;

};
int A::var = 0;

int main()
{
    A a1;
    A a2;
    A a3;
    return 0;
}