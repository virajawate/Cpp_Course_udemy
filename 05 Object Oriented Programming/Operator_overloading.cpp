#include <iostream>

using namespace std;

class A
{
    private:
    int weight;
    public:
    A(int x=0)
    {
        weight = x;
    }
    void getWeight()
    {
        cout<<"Total Weigth is : "<<weight<<endl;
    }
    A operator + (A w)
    {
        A temp;
        temp.weight = weight + w.weight;
        return temp;
    }
};

int main()
{
    int a =4, b =5;
    int c = a + b;

    cout<<endl<<c<<endl;

    //Operator overloading
    A Apples(3);
    A Bananas(5);
    A Total = Apples + Bananas;

    return 0;

}