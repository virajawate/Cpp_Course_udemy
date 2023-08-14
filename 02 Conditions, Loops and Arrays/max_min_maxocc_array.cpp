#include <iostream>
using namespace std;

/*
Maximum number in array
Minimum number in array
Maximum occurance number in array
*/

int main()
{
    int arr[] = {43, 55, 6, 8, 2, 45, 3, 2, 455, 68, 32, 6, 1, 12, 4, 67, 8, 6, 9, 6, 6, 3};
    int len, max = 0, min, maxf, maxoc, count = 0;

    len = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            if (arr[i] > arr[j])
            {
                min = arr[j];
            }
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (max < arr[i])
        {
            max = arr[i];
        }
        if (maxf < count)
        {
            maxf = count;
            maxoc = arr[i];
        }
        count = 0;
    }
    cout << "Max : " << max << endl;
    cout << "Min : " << min << endl;
    cout << "Most occ: " << maxoc << ", " << maxf << " times." << endl;

    return 0;
}