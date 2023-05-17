#include <iostream>

using namespace std;

const int size = 5;

/**
 * @brief The function use the pointer parameter
 * to access the memory address and print the array
 * @param ptr
 */
void printarr(int *ptr)
{
    for (int i = 0; i < size; i++)
        cout << *ptr++ << " ";
    // Increamenting the pointer to access the next element of the array
}

/**
 * @brief This function is defined to
 * know other method of print the array without pointers
 *
 * @param ar
 * @param sz
 */
void printarr2(int ar[], int sz)
{
    for (int i = 0; i < sz; i++)
        cout << ar[i] << " ";
}

void inputarr(int *b_ptr)
{

    for (int i = 0; i < size; i++)
        cout << *b_ptr++ << " ";
    cout << endl;
}

int main()
{
    int arr[size] = {34, 34, 343, 545, 456};
    int b[size]; // Empty array
    int *b_ptrs; // Created a 'int' pointer

    b_ptrs = b; // pointer is loaded with array name
    // Inputing data with pointers
    for (int i = 0; i < size; i++)
        cin >> *b_ptrs++;

    inputarr(b);
    printarr(arr);
    cout << endl;
    // arr is same as &arr[0]

    printarr2(arr, size);
    cout << endl;
    // arr is also the representation of whole array

    return 0;
}