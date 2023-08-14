#include <iostream>
using namespace std;

/*
Sorting Number of array
*/

int main()
{
    int arr[] = {43, 55, 6, 8, 2, 45, 3, 2, 455, 68, 32, 6, 1, 12, 4, 67, 8, 6, 9, 6, 6, 3};
    int len, temp;

    len = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}