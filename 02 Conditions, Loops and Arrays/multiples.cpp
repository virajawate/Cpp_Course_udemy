#include <iostream>
using namespace std;

int main()
{
    int num=0;

    cout<<"Enter number : ";
    cin>>num;

    if(num%3==0)
    {
        cout<<"Multiple of 3"<<endl;
    }
    else if(num%5==0)
    {
        cout<<"Multiple of 5"<<endl;
    }
    else if(num%7==0)
    {
        cout<<"Multiple of 7"<<endl;
    }
    else if(num%13==0)
    {
        cout<<"Multiple of 13"<<endl;
    }
    else
    {
        cout<<"Out of multiples : "<<num<<endl;
    }
    
    return 0;
}