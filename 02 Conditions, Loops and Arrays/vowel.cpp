#include <iostream>
using namespace std;

int main()
{
    char str;

    cout<<"Enter character : ";
    cin>>str;

    if(str == 'a' || str == 'e' || str == 'i' || str == 'o' || str == 'u')
    {
        cout<<str<<" character is vowel."<<endl;
    }
    else if(str == 'h' || str == 'w')
    {
        cout<<str<<" character is half vowel."<<endl;
    }
    else
    {
        cout<<str<<" character is consonent."<<endl;
    }

    return 0;
}