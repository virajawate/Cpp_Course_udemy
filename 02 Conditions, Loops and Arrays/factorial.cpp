#include <iostream>
using namespace std;

int main()
{
    int num=0, factorial=1;

    cout<<"Enter number :";
    cin>>num;

    for(int i=num; i>=1; i--)
    {
        factorial*=i;
    }

    cout<<factorial<<endl;

    return 0;
}