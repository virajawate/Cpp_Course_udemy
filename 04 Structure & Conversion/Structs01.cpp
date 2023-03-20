#include <iostream>
using namespace std;


struct Phone
{
    string Name;
    int RAM;
    int ROM;
    string Proc;
    int Camera;
    double Price;
};
int main()
{
    Phone Mobile;
    cout<<"Enter Phone Name: ";
    cin>>Mobile.Name;

    cout<<"Enter Price :";
    cin>>Mobile.Price;

    cout<<"Enter RAM : ";
    cin>>Mobile.RAM;

    cout<<"Enter Storage : ";
    cin>>Mobile.ROM;

    cout<<"Enter Processor : ";
    cin>>Mobile.Proc;

    cout<<"Enter Camera : ";
    cin>>Mobile.Camera;

    cout<<"Your Phone is "<<Mobile.Name<<" with "<<Mobile.Proc<<" processor loaded with "<<Mobile.RAM<<"GB RAM and "<<Mobile.ROM<<"GB Storage with Camera of "<<Mobile.Camera<<"MP lense."<<endl<<"It is available at Rs. "<<Mobile.Price<<endl;
    
    return 0;
}