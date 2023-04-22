#include <iostream>

using namespace std;

/**
 * @brief The program shows basic functioning of pointers
 * the program has variable 'num' with data
 * the pointer 'ads' is used to store the address of 'num'
 * the '*' operator is used to initiate the pointer.
 *
 * @return int
 */
int main()
{
    int num = 10;
    int *ads = &num;

    cout << "Number is (num):" << num << endl;
    cout << "Pointer of Number (ads):" << ads << endl;
    cout << "Pointer data is given by (*ads) =" << *ads << endl;
    cout << "Address of pointer = " << &ads << endl;

    return 0;
}