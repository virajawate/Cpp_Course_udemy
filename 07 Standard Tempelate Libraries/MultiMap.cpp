#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    multimap<int, string> Cups;
    multimap<int, string> Plates = {{1, "Clakes"}, {2, "Cina"}, {3, "Metals"}, {4, "Greens"}};

    Cups.insert(pair<int, string>(333, "Hellos"));
    Cups.insert(make_pair(342, "Flinks"));

    /*
    OTHER THINGS ARE SAME AS THE map PROGRAM....
    */
}