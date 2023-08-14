/**
 * @file Algorithms.cpp
 * @author Viraj Awate (viraj.awate@gmail.com)
 * @brief  This program has algorithms which can be used on the containers.
 * @version 0.1
 * @date 2023-08-14
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void display_vec(std::vector<int> vec)
{
    for (std::vector<int>::iterator i = vec.begin(); i != vec.end(); i++)
    {
        cout << *i << "\t";
    }
    std::cout << endl;
}

int main()
{
    vector<int> tens = {40, 30, 21, 24, 56,45,45,45, 65, 64, 53};

    display_vec(tens);

    // Sorting algorithm

    sort(tens.begin(), tens.end());
    cout << "Sorted Vector is : \t";
    display_vec(tens);

    // Reverse Algorithm

    reverse(tens.begin(), tens.end());
    cout << "Reversed Vector is : \t";
    display_vec(tens);

    // Minimum Element and Maximum Element
    cout << "Largest element of Tens Vector : \t" << *max_element(tens.begin(), tens.end()) << endl;
    cout << "Smallest element of Tens Vector : \t" << *min_element(tens.begin(), tens.end()) << endl;

    // Binary search algorithm
    if (binary_search(tens.begin(), tens.end(), 43))
        cout << "Element Found" << endl;
    else
        cout << "Element Not Found" << endl;

    //                   0 1 2 3  4  5  6  7
    vector<int> units = {3, 2, 4, 45, 67, 12, 12, 12, 45, 9, 21};
    vector<int>::iterator item1, item2;
    item1 = upper_bound(units.begin(), units.end(), 45);
    item2 = lower_bound(units.begin(), units.end(), 12);

    // Count
    cout << "Number of 45s : \t" << count(units.begin(), units.end(), 45) << endl;

    // Copy
    vector<int> vec3;
    copy(tens.begin(), tens.end(), back_inserter(vec3));

    // Swapping
    cout << "Tens before Swapping : \t";
    display_vec(tens);
    cout << "Units before Swapping : \t";
    display_vec(units);
    swap_ranges(tens.begin(), tens.end(), units.begin());
    cout << "Tens after Swapping : \t";
    display_vec(tens);
    cout << "Units after Swapping : \t";
    display_vec(units);

    // Unique : Remove duplicates
    cout<<"Vector Before removing duplicating : \t";
    display_vec(units);
    vector<int>::iterator unq = unique(units.begin(), units.end());
    units.erase(unq, units.end());
    cout<<"Vector After removing duplicating : \t";
    display_vec(units);

    return 0;
}
/**
 * @brief OUTPUT
 *
 *
40      30      21      24      56      45      45      45      65      64      53
Sorted Vector is :      21      24      30      40      45      45      45      53      56      64      65
Reversed Vector is :    65      64      56      53      45      45      45      40      30      24      21
Largest element of Tens Vector :        65
Smallest element of Tens Vector :       21
Element Not Found
Number of 45s :         2
Tens before Swapping :  65      64      56      53      45      45      45      40      30      24      21
Units before Swapping :         3       2       4       45      67      12      12      12      45      9       21
Tens after Swapping :   3       2       4       45      67      12      12      12      45      9       21
Units after Swapping :  65      64      56      53      45      45      45      40      30      24      21
Vector Before removing duplicating :    65      64      56      53      45      45      45      40      30      24      21
Vector After removing duplicating :     65      64      56      53      45      40      30      24      21
 *
 *
 */