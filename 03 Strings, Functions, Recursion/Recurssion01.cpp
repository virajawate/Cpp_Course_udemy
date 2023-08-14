#include <iostream>
using namespace std;

int factorial(int);

int main()
{
    int a;

    cout << "Enter the number for factorial :";
    cin >> a;
    int fact;
    fact = factorial(a);

    cout << "Factorial is : " << fact << endl;
    ;

    return 0;
}

int factorial(int x)
{
    int fact;
    if (x > 0)
    {
        fact = x * factorial(x - 1);
        return fact;
    }
    else
        return fact;
}