#include <iostream>
#include <string>

using namespace std;

int main()
{
    string var1 = "", var2 = "";

    cout<<"Enter 1st string : ";
    getline(cin, var1);

    cout<<"Enter 2nd string : ";
    getline(cin, var2);

    if(var1.compare(var2) == 0)
    {
        cout<<"String Match"<<endl;
    }
    else{
        cout<<"Strings Not matched"<<endl;
    }

    return 0;
}