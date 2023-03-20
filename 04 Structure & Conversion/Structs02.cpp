#include <iostream>
using namespace std;

struct camera
{
    int front;
    int rear;
};

struct Phone
{
    string Name;
    int RAM;
    int ROM;
    string Proc;
    camera Camera;
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

    cout<<"Enter Front Camera : ";
    cin>>Mobile.Camera.front;
    
    cout<<"Enter Back Camera : ";
    cin>>Mobile.Camera.rear;

    cout<<"Enter Processor : ";
    cin>>Mobile.Proc;


    cout<<"Your Phone is "<<Mobile.Name<<" with "<<Mobile.Proc<<" processor "<<endl<<"Loaded with "<<Mobile.RAM<<"GB RAM and "<<Mobile.ROM<<"GB Storage "<<endl<<"Front Camera of "<<Mobile.Camera.front<<"MP lense and Rear Camera of "<<Mobile.Camera.rear<<endl<<"It is available at Rs. "<<Mobile.Price<<endl;
    
    return 0;
}