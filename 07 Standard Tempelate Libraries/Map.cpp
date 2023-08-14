#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    map<int, string> local;
    map<int, string> global = {{101, "Students"}, {102, "Teachers"}, {103, "Representer"}, {104, "Coolers"}, {105, "Stingers"}};

    local.insert(make_pair(01, "School"));
    local.insert(pair<int, string>(02, "College"));
    local.insert(make_pair(03, "University"));
    local.insert(pair<int, string>(04, "Institution"));
    cout << "=: Local Map :=" << endl;
    for (map<int, string>::iterator i = local.begin(); i != local.end(); i++)
    {
        cout << i->first << ":" << i->second << endl;
    }
    cout << endl;
    cout << "=: Global Map :=" << endl;
    for (map<int, string>::iterator i = global.begin(); i != global.end(); i++)
    {
        cout << i->first << ":" << i->second << endl;
    }
    cout << endl;
    cout << "=: Local Map :=" << endl;
    map<int, string>::iterator i = local.begin();
    local.erase(i);
    for (map<int, string>::iterator i = local.begin(); i != local.end(); i++)
    {
        cout << i->first << ":" << i->second << endl;
    }
    cout << endl;

    return 0;
}