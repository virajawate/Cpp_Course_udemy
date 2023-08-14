#include <iostream>

using namespace std;

class Test
{
private:
    int data;

public:
    void setdata(int x)
    {
        data = x;
    }

    int getdata()
    {
        return data;
    }
};

int main()
{
    Test *ptr = new Test;

    ptr->setdata(10);
    cout << "Data is :" << ptr->getdata() << endl;

    return 0;
}