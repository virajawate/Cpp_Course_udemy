#include<iostream>
using namespace std;

int main()
{
    int num=0, sum=0, mult=1;

    cout<<"Enter the range :";
    cin>>num;
    int num2 = num;

    // Sum of next 10 numbers
    for(int i=0; i<10; i++)
    {
        sum+=num;
        num=num+1;
    }

    cout<<sum<<endl;

    // Multiplication of next 10 numbers
    for(int i=1; i<10; i++)
    {
        num2=num2+1;
        mult*=num2;
    }

    cout<<mult<<endl;

    return 0;
}