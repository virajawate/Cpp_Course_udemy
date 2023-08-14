#include <iostream>
using namespace std;

struct Padding
{
    int age;
    short int ID;
    double salary;
};
int main()
{
    Padding pad;
    pad.age = 18;
    pad.ID = 3223;
    pad.salary = 47400;

    cout << "Age :" << pad.age << endl
         << "ID :" << pad.ID << endl
         << "Salary :" << pad.salary << endl;

    return 0;
}