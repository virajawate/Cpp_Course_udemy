#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> nums = {12, 32, 213, 43, 43534, 2314, 2319, 8069, 435345};

    for (set<int>::iterator i = nums.begin(); i != nums.end(); i++)
    {
        cout << *i << "\t";
    }
    cout << endl;

    nums.insert(43);
    nums.insert(99);

    for (set<int>::iterator i = nums.begin(); i != nums.end(); i++)
    {
        cout << *i << "\t";
    }
    cout << endl;

    return 0;
}