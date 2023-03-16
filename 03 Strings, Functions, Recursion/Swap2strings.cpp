#include <iostream>
#include <string>

using namespace std;

int main()
{
    string var1 = "", var2 = "";
    string temp = "";

    cout<<"Enter 1st string : ";
    getline(cin, var1);

    cout<<"Enter 2nd string : ";
    getline(cin, var2);
    
    cout<<"Before swaping = "<<var1<<":"<<var2<<endl;
    // By overRiding the variable
    temp = var1;
    var1 = var2;
    var2 = temp;
    
    cout<<"After swaping = "<<var1<<":"<<var2<<endl;

    var1.swap(var2); // Built-in function

    cout<<"After swaping = "<<var1<<":"<<var2<<endl;

    return 0;
}