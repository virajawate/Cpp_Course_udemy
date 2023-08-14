#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 0;
    int sum = 0;
    cout << "Please Enter numbers :" << endl;
    cin >> a >> b;

    sum = a + b;
    cout << "Sum of the numbers : " << sum << endl;

    cout << "Swapping NUmbers \n";

    cout << "Before\n";
    cout << "A is " << a << endl;
    cout << "B is " << b << endl;

    int temp = 0;
    temp = a;
    a = b;
    b = temp;

    cout << "After\n";
    cout << "A is " << a << endl;
    cout << "B is " << b << endl;

    return 0;
}