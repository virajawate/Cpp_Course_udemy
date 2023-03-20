
#include <iostream>
using namespace std;

int sum(int);

int main()
{
    int a;

    cout<<"Enter the number :";
    cin>>a;
    int fact;
    fact = sum(a);

    cout<<"Sum is : "<<fact<<endl;;

    return 0;
}

int sum(int x)
{
    if(x>0)
    {

        return(x+sum(x-1));
    }
    else
        return 0;
}