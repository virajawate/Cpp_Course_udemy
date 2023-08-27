#include <iostream>
#include <string>

using namespace std;

template <class T>
class sum
{
private:
    T x, y;

public:
    sum(T a, T b)
    {
        x = a;
        y = b;
    }

    T getsum()
    {
        cout<<x+y<<endl;
    }
};

int main()
{
    sum<int> obj1(3,23);
    sum<float> obj2(3.21f, 423.1f);
    sum<string> obj3("Flunt ", "right.");

    obj1.getsum();
    obj2.getsum();
    obj3.getsum();

    return 0;
}