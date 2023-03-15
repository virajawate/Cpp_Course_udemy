#include <iostream>
using namespace std;

int main()
{
    int num=10;

    cout<<"The Increment series : "<<endl;
    for(int i=0; i<num;i++)
    {
        cout<<i<<"\t";
    }
    cout<<endl;

    cout<<"The Increment second series : "<<endl;
    for(int i=0; i<num;++i)
    {
        cout<<i<<"\t";
    }
    cout<<endl;

    cout<<"The Decreament series : "<<endl;
    for(int i=num; i>0; i--)
    {
        cout<<i<<"\t";
    }
    cout<<endl;

    cout<<"The Decrement second series : "<<endl;
    for(int i=num; i>0; --i)
    {
        cout<<i<<"\t";
    }
    cout<<endl;

    return 0;    
}