#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    cout<<"Enter three digit number :\n";
    cin>>num;

    int first, last, mid, mid2;
    first = num/100;
    cout<<"First Digit is :\t"<<first<<endl;
    last = num%10;
    cout<<"Last number is :\t"<<last<<endl;
    mid=(num%100)/10;
    mid2=(num/10)%10;
    cout<<"Middle Digit is :\t"<<mid<<endl;
    cout<<"Middle Digit is :\t"<<mid2<<endl;

    return 0;
}