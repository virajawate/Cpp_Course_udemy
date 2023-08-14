#include <iostream>
#include <set>

using namespace std;

int main()
{
    multiset<int> nums = {12, 32, 213, 33, 43534, 2314, 2319, 8069, 435345};
    multiset<int> prime;
    for (multiset<int>::iterator i = nums.begin(); i != nums.end(); i++)
    {
        cout << *i << "\t";
    }
    cout << endl;

    nums.insert(43);
    nums.insert(99);

    for (multiset<int>::iterator i = nums.begin(); i != nums.end(); i++)
    {
        cout << *i << "\t";
    }
    cout << endl;

    nums.erase(nums.begin(), nums.find(2314));
    prime.swap(nums);

    for (multiset<int>::iterator i = nums.begin(); i != nums.end(); i++)
    {
        cout << *i << "\t"
             << ":";
    }
    cout << endl;

    for (multiset<int>::iterator i = prime.begin(); i != prime.end(); i++)
    {
        cout << *i << "\t";
    }
    cout << endl;

    cout << "Size Nums :" << nums.size() << endl;
    cout << "Size Prime:" << prime.size() << endl;

    return 0;
}