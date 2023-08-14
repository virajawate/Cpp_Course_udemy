#include <iostream>

class A
{
private:
    int a1 = 0;
    int a2 = 0;

public:
    A()
    {
        std::cout << a1 << " " << a2 << " " << var << std::endl;
    }

    static int get_static()
    {
        var++;
        return var;
    }
    static int var;
};

int A::var;

int main()
{
    A p;
    A q;
    std::cout << "Static variable : " << A::var << std::endl;
    std::cout << "Static p class var : " << p.get_static() << std::endl;
    std::cout << "Static q class var : " << q.get_static() << std::endl;
    std::cout << "Static variables are shared between objects ;" << std::endl;
    std::cout << "Class var " << p.var << std::endl;
    std::cout << "Class var " << q.var << std::endl;
    return 0;
}