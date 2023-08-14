/**
 * @file List.cpp
 * @author Viraj Awate (viraj.awate@gmail.com)
 * @brief This Program Shows the ops in Lists and its syntax
 * @version 0.1
 * @date 2023-08-15
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> whole;
    list<int> prime = {1, 2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
    list<int>::iterator i = prime.end();
    prime.insert(i, 31);
    list<int>::iterator j = whole.end();
    whole.insert(j, 231);
    for (list<int>::iterator i = prime.begin(); i != prime.end(); i++)
    {
        cout << *i << "\t";
    }
    cout << endl;
    prime.push_back(37);
    prime.push_front(0);
    for (list<int>::iterator i = prime.begin(); i != prime.end(); i++)
    {
        cout << *i << "\t";
    }
    cout << endl;
    prime.pop_back();
    prime.pop_front();
    for (list<int>::iterator i = prime.begin(); i != prime.end(); i++)
    {
        cout << *i << "\t";
    }
    cout << endl;
    cout << "Size of Whole Number :" << whole.size() << endl;
    cout << "Size of Prime Number :" << prime.size() << endl;
    prime.reverse();
    for (list<int>::iterator i = prime.begin(); i != prime.end(); i++)
    {
        cout << *i << "\t";
    }
    cout << endl;
    prime.swap(whole);
    for (list<int>::iterator i = whole.begin(); i != whole.end(); i++)
    {
        cout << *i << "\t";
    }
    cout << endl;
    cout << "Size of Whole Number :" << whole.size() << endl;
    cout << "Size of Prime Number :" << prime.size() << endl;
    prime.merge(whole);
    cout << "Size of Whole Number :" << whole.size() << endl;
    cout << "Size of Prime Number :" << prime.size() << endl;
}