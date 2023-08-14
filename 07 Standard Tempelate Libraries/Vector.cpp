#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> Vec1;
    vector<int> Vec2 = {10, 32, 53};

    Vec1.push_back(23);
    Vec1.push_back(405);
    Vec1.push_back(42);
    Vec1.push_back(99);

    cout << "Size of Vector1 :" << Vec1.size() << endl;

    cout << "At 3 : " << Vec1.at(3) << endl;
    cout << "[] : " << Vec1[3] << endl;

    Vec2.push_back(34);
    Vec2.push_back(459);
    cout << "First Vector : " << endl;
    for (vector<int>::iterator i = Vec1.begin(); i != Vec1.end(); i++)
    {
        cout << *i << "  ";
    }

    cout << endl;

    vector<int>::iterator j = Vec1.begin();
    Vec1.insert(j, 11);
    cout << "First Vector : " << endl;
    for (vector<int>::iterator i = Vec1.begin(); i != Vec1.end(); i++)
    {
        cout << *i << "  ";
    }
    cout << endl;
    cout << "Second Vector : " << endl;
    for (vector<int>::iterator i = Vec2.begin(); i != Vec2.end(); i++)
    {
        cout << *i << "  ";
    }
    cout << endl;
    Vec2.pop_back();
    cout << "After pop back " << endl;
    cout << "Second Vector : " << endl;
    for (vector<int>::iterator i = Vec2.begin(); i != Vec2.end(); i++)
    {
        cout << *i << "  ";
    }
    cout << endl;
    cout << "Size of Vec1 : " << Vec1.size() << " Size of Vec2 : " << Vec2.size() << endl;
    cout << "Capacity of Vec1 : " << Vec1.capacity() << " Capacity of Vec2 :" << Vec2.capacity() << endl;
    return 0;
}