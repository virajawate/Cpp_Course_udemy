#include <iostream>
#include <string>

using namespace std;

int main()
{
    string var1 = "", var2 = "", var3 = "";

    cout << "Enter string :";
    getline(cin, var1);

    cout << "Enter finding string :";
    getline(cin, var2);

    cout << "Enter replacing string :";
    getline(cin, var3);

    cout << "String before replacing :" << var1 << endl;

    while (var1.find(var2) != string::npos)
    {
        var1.replace(var1.find(var2), var2.size(), var3);
    }

    cout << "String after replacing :" << var1 << endl;

    return 0;
}