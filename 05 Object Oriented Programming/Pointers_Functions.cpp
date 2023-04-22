#include <iostream>

using namespace std;

/**
 * @brief The function uses the pointer as parameter
 * The pointer can me used to directly manipulating the data
 * The data is manipulated directly using the address of data
 *
 * @param ptr
 */
void square(int *ptr)
{
    int temp = *ptr;
    temp = temp * temp;
    *ptr = temp;
}

/**
 * @brief This function is the example that 
 * without return type the data in the variable 
 * can not be changed.
 * 
 * 
 * @param x  is flushed outside of the scope of the function
 */
void sq(int x)
{
    int temp = x;
    temp = temp * temp;
    x = temp;
}

int main()
{
    int num = 11;
    cout << num << endl;
    int num2 = 40;
    int *ptr2 = &num2;

    square(&num);
    cout << "Squared : " << num << endl;
    // Remark With pointer we can manipulate the data explicitly

    sq(num);
    cout << "Squared twice : " << num << endl;
    //Remark the can't be returned thus the variable 'x' is delete outside the scope of the function

    cout<<"The square of "<<num2;
    square(ptr2); 
    //ptr2 is & num2
    cout << " is  : " << num2 << endl;

    return 0;
}