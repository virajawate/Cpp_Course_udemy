#include <iostream>

using namespace std;

class baseone
{
private:
    int a1;

public:
    baseone(int x = 0)
    {
        a1 = x;
    }

    friend void friend_fun();
};

class basetwo
{
private:
    int b1;

public:
    basetwo(int y = 0)
    {
        b1 = y;
    }
    friend void friend_fun();
};

void friend_fun()
{
    baseone one(5);
    basetwo two(53);

    int c = one.a1 + two.b1;

    cout << c << endl;
}

int main()
{
    friend_fun();
    return 0;
}