#include <iostream>
using namespace std;

/*
Even & Odd number
*/

int main()
{
    int arr[] = {12, 23, 54, 7, 23, 8, 23};
    int len;

    len = sizeof(arr) / sizeof(arr[0]);

    cout << "Even elements in array : ";
    for (int i = 0; i < len; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    cout << "Odd elements in array : ";
    for (int i = 0; i < len; i++)
    {
        if (arr[i] % 2 != 0)
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    return 0;
}