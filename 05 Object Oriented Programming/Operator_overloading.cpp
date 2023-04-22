#include <iostream>

using namespace std;

class A
{
private:
    int weight;

public:
    A(int x = 0)
    {
        weight = x;
    }
    void getWeight()
    {
        cout << "Total Weigth is : " << weight << endl;
    }
    A operator+(A w)
    {
        A temp;
        temp.weight = weight + w.weight;
        return temp;
    }
    void operator++()
    {
        ++weight;
    }
    void operator++(int)
    {
        weight++;
    }
    void operator--()
    {
        --weight;
    }
    void operator--(int)
    {
        weight--;
    }
};

int main()
{
    /**
     * @brief Opeator Overloading for objects
     * Manipulation in the object using operators
     */
    A Apples(3);
    A Bananas(5);
    A Total = Apples + Bananas;
    Total.getWeight();

    /**
     * @brief COnstructor operator overloading
     * Preincrement
     * Postincrement
     * Predecrement
     * Postdecrement
     */

    A Pineapple(3);
    Pineapple.getWeight();
    ++Pineapple;
    cout << "Pre-increment" << endl;
    Pineapple.getWeight();
    Pineapple++;
    cout << "Post-increment" << endl;
    Pineapple.getWeight();
    --Pineapple;
    cout << "Pre-decrement" << endl;
    Pineapple.getWeight();
    Pineapple--;
    cout << "Post-decrement" << endl;
    Pineapple.getWeight();
    return 0;
}