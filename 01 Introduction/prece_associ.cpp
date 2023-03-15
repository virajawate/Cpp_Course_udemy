#include <iostream>
using namespace std;

int main()
{
    int a =10, b=45, c=7, d=52;

    float op1, op2, op3;

    op1 = b - a + c; 
    cout<<op1<<endl;

    op2 = ++c - --b + d;
    cout<<op2<<endl;

    op3 = b++ - (a+d);
    cout<<op3<<endl;

    return 0;
}