#include <iostream>
#include <string>
using namespace std;

class person
{
private:
    string name;
    double age, weight, height;

public:
    person() // NON-Parameterized Constructor
    {
        name = "Viraj";
        age = 25;
        weight = 77;
        height = 5.8;
    }
    // person(string naam, double umar, double wzn, double lmbai) // Parameterized COnstructor
    // {
    //     name = naam;
    //     age = umar;
    //     weight = wzn;
    //     height = lmbai;
    // }
    person(person &shashank) // Copy constructor
    {
        name = shashank.name;
        age = shashank.age;
        weight = shashank.weight;
        height = shashank.height;
    }
    person(string naam = "Awate", double umar = 45, double wzn = 100, double lmbai = 5.9) // Parameterized COnstructor
    {
        name = naam;
        age = umar;
        weight = wzn;
        height = lmbai;
    }

    void getter()
    {
        cout << name << "|" << age << "|" << weight << "|" << height << endl;
    }
};

int main()
{
    person shashank("Shashank", 22, 108, 6), chotabhai(shashank);
    person Viraj = Viraj;
    Viraj.getter();
    shashank.getter();
    chotabhai.getter();
    // awate.getter();
    return 0;
}