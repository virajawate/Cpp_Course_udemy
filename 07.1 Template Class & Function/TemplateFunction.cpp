#include <iostream>
#include <string>

using namespace std;

/**
 * @brief Generic function which will
 * return any kind of input data-type
 * 
 * @tparam T class with all the available data-types
 * @param x generic input
 * @param y generic imput
 * @return T 
 */

template <class T>
T sum(T x, T y)
{
    return x + y;
}

int main()
{
    cout << "Sum with integers: " << sum<int>(4, 43) << endl;
    cout << "Sum with strings: " << sum<string>("Think", "stright") << endl;
    cout << "Sum with floats: " << sum<float>(32.42f, 2.3f) << endl;
    cout << "Sum with doubles: " << sum<double>(324.2342, 23432.2434) << endl;
    return 0;
}