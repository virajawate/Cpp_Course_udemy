#include <iostream>
#include <string>
using namespace std;

void trial()
{
    cout<<"Hello function."<<endl;
}

int square(int x)
{
    return (x*x);
}

int stringSwap(string ch1, string ch2)
{
    string temp = "";
    temp = ch1;
    ch1 = ch2;
    ch2 = temp;
    cout<<"After : "<<ch1<<":"<<ch2<<endl;
    return 0;
}

int main()
{
    trial();
    int num;
    cout<<"Enter Squaring Number : ";
    cin>>num;
    cout<<"The square is : "<<square(num)<<endl;

    string var1= "hello hey", var2 = " How do you do ";
    cout<<"Before : "<<var1<<":"<<var2<<endl;
    stringSwap(var1, var2);
    
    return 0;
}