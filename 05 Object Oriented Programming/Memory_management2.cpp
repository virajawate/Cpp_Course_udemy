#include <iostream>

using namespace std;

class Car
{
private:
    int weight;

public:
    void setdata(int x)
    {
        weight = x;
    }

    int getdata()
    {
        return weight;
    }
};

class BMW
{
private:
    int topspeed;
    Car *ptr = new Car;

public:
    BMW(int wgt = 0, int tspeed = 0)
    {
        ptr->setdata(wgt);
        topspeed = tspeed;
    }

    int getweight()
    {
        return ptr->getdata();
    }

    int getspeed()
    {
        return topspeed;
    }

    ~BMW()
    {
        delete ptr;
    }
};

int main()
{
    BMW b(3000, 300);

    cout << "Weight of car :" << b.getweight() << endl;
    cout << "Top Speed of car :" << b.getspeed() << endl;
}