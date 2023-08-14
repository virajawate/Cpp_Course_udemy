/**
 * @file Array.cpp
 * @author Viraj Awate (viraj.awate@gmail.com)
 * @brief This Program shows different operations performed on Arrays
 * @version 0.1
 * @date 2023-08-15
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int, 6> arr;
    array<int, 6> A1 = {10, 30, 10, 24};

    cout << "Second element in A1 :" << A1.at(2) << endl;
    cout << "Third element in A1 :" << A1[2] << endl;
    cout << "Enter the elements in the array :" << endl;

    for (int i = 0; i < 6; i++)
    {
        cin >> arr[i];
    }

    cout << "Second element in arr :" << arr.at(2) << endl;
    cout << "Third element in arr :" << arr[2] << endl;
    cout << "Size of the array :" << arr.size() << endl;
    cout << "Capacity of the array :" << arr.max_size() << endl;

    arr.swap(A1); // Size of both arrays should be same
    arr.empty();
    cout << "=:arr is emptyed:=" << endl;
    cout << "Size of the array :" << arr.size() << endl;
    cout << "Capacity of the array :" << arr.max_size() << endl;

    cout << "Second element in A1 :" << A1.at(2) << endl;
    cout << "Third element in A1 :" << A1[2] << endl;
    cout << "Size of the A1 :" << A1.size() << endl;
    cout << "Capacity of the A1 :" << A1.max_size() << endl;

    return 0;
}