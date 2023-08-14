#include <iostream>
#include <string>

using namespace std;

int main()
{
    string var, chr;
    string concat;

    cout << "Enter Characters : ";
    cin >> var;

    cout << "Enter string : ";
    cin >> chr;

    concat = var + chr;

    cout << "Concatinated Character : " << concat << endl;

    return 0;
}