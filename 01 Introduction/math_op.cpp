#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 0;
    
    cout<<"Please Enter numbers :"<<endl;
    cin>>a>>b;

    int Area=0, Peri=0;
    int Avg=0, Mod=0;

    Area=a*b;
    Peri=(a+a)+(b+b);
    cout<<"Area is :"<<Area<<endl;
    cout<<"Peripheri is :"<<Peri<<endl;
    
    int n1 =0, n2 =0, n3=0, n4=0;
    cout<<"Enter numbers :\n";
    cin>>n1>>n2>>n3>>n4;
    Avg = (n1+n2+n3+n4)/4;
    cout<<"Average is:"<<Avg<<endl;
    
    int num =0;
    cout<<"Enter Number: \n";
    cin>>num;
    Mod = num%5;
    cout<<"Modulus of "<<num<<" is "<<Mod<<endl;

    return 0;
}