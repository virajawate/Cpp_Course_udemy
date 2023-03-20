#include <iostream>
using namespace std;

int main()
{
    int integer=10;
    float Float=14.10;
    long double Double=324.324254;

    cout<<integer<<endl;
    cout<<Float<<endl;
    cout<<Double<<endl;

    cout<<"Conversion."<<endl;

    integer = Float;
    Float = Double;
    Double = integer;

    cout<<integer<<endl;
    cout<<Float<<endl;
    cout<<Double<<endl;

}