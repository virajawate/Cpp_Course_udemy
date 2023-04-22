#include <iostream>

using namespace std;

/**
 * @brief The program shows functioning of pointers on array
 * the program has array 'arr' and pointer 'ptr'
 * the pointer 'ptr' can be maniuplated access the value of array data
 * 
 * @return int
 */
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr; // same as &arr[0]

    for (int i = 0; i < 5; i++)
    {
        cout << "Value is :" << i << " the data is = " << *(ptr + i) << endl;
    }

    return 0;
}