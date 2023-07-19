#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main()
{
    unordered_set<int> soups;
    unordered_set<string> nodds = {"penee", "spegitte", "Longcut", "Nodpenne"};

    for (unordered_set<string>::iterator i = nodds.begin(); i != nodds.end(); i++)
    {
        cout << *i << "\t";
    }

    soups.insert(23);
    soups.insert(9023);
    soups.insert(345);
    soups.insert(431);

    cout << endl;
    for (unordered_set<int>::iterator i = soups.begin(); i != soups.end(); i++)
    {
        cout << *i << "\t";
    }
    cout << endl
         << "Size uset1 : " << soups.size();
    cout << endl
         << "Size uset2 : " << nodds.size();

    return 0;
}