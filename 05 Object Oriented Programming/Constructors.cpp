#include <iostream>
#include <string>
using namespace std;

class person
{
    private:
        string name;
        int age, weight, height;
    
    public:
        // NON-Parameterized Constructor
        person() 
        {
            name = "Viraj";
            age = 25;
            weight = 77;
            height = 5.8;
        }

        /** Parameterized Constructor
        person(string naam, int umar, int wzn, int lmbai) 
        {
            name = naam;
            age = umar;
            weight = wzn;
           height = lmbai;
        } 
        */

        // Copy constructor
        person(person &shashank)  
        {
            name = shashank.name;
            age = shashank.age;
            weight = shashank.weight;
            height = shashank.height;
        }
        person(string naam = "Awate", int umar = 45, int wzn = 100, int lmbai = 5.9) // Parameterized COnstructor
        {
            name = naam;
            age = umar;
            weight = wzn;
            height = lmbai;
        }
        

        void getter()
        {
            cout<<name<<"|"<<age<<"|"<<weight<<"|"<<height<<endl;
        }
};

int main()
{
    person shashank("Shashank",22,108,6);
    person Doctor(shashank);
    person Viraj =  Viraj;
    Viraj.getter();
    shashank.getter();
    Doctor.getter();
    // awate.getter();
    return 0;
}