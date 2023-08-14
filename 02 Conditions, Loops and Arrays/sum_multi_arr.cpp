#include <iostream>
using namespace std;

/*
Sum and Multiple of Array
*/

int main()
{
    int arr[] = {12, 23, 54, 7, 23, 8, 23};
    int len, sum = 0, mult = 1;

    len = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < len; i++)
    {
        sum += arr[i];
        mult *= arr[i];
    }

    cout << "Sum of Array :" << sum << endl;
    cout << "Multiplication of elements of Array :" << mult << endl;

    return 0;
}