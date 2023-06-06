#include <iostream>

using namespace std;

class bhai_yaar
{
    private:
    int ek;
    public:
    bhai_yaar(int x =0)
    {
        ek = x;
        cout<<"Bhai Yaar"<<endl;
    }
    friend class yaar_bhai;
};

class yaar_bhai
{
    private:
    int doo;
    public:
    yaar_bhai(int y =9)
    {
        doo = y;
        bhai_yaar by(4);
        cout<<"Yaar Bhai : le "<<by.ek<<" aur "<<doo;
    }
};


int main()
{
    yaar_bhai yb(7);
    return 0;
}