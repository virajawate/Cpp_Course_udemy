#include <iostream>
using namespace std;

int main()
{
    int n1 = 0, n2 = 0, n3 = 0;

    cout << "Enter first number :" << endl;
    cin >> n1;
    cout << "Enter second number :" << endl;
    cin >> n2;
    cout << "Enter third number :" << endl;
    cin >> n3;

    if (n1 > n2 && n1 > n3)
    {
        cout << "First number is largest." << endl;
    }
    else if (n2 > n1 && n2 > n3)
    {
        cout << "Second number is largest." << endl;
    }
    else
    {
        cout << "Third number is largest" << endl;
    }

    return 0;
}