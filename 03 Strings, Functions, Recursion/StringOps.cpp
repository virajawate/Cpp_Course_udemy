#include <iostream>
#include <string>

using namespace std;

int main()
{
    string var1 = "", var2 = "", rev1 = "";
    
    cout<<"Enter 1st String : ";
    getline(cin, var1);
    
    rev1 = var1;
    char temp = var1[0];

    cout<<"Enter 2nd String : ";
    getline(cin, var2);

    // Output String
    for(int i=var2.size(); i>=0; i--)
    {
        cout<<var2[i];
    }
    cout<<endl;

    // Deletes Vowels in the string
    for(int i=0; i<var1.size(); i++)
    {
        if(var1[i] == 'a' || var1[i] == 'e' || var1[i] == 'i' || var1[i] == 'o' || var1[i] == 'u' )
        {
            var1[i] = ' ';
        }
    }
    cout<<var1<<endl;

    var1 = rev1;
    
    // Deleting specific character
    for(int i = 1; i<var1.size(); i++)
    {
        if(var1[i] == temp)
        {
            var1[i] = ' ';
        }
    }
    cout<<var1<<endl;

    return 0;
}