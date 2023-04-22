#include <iostream>

using namespace std;

class person
{
    private:
    int age, id, weight;
    
    public:

    /**
     * @brief Construct a new person object
     * This function's parameters have same name as class member
     * thus 'this' pointer is used to access the class members.
     * 
     * 'this' pointer is refers to calling object.
     * User can not access/modified 'this' pointer.
     * 
     * This will not allow this function to give preference to local variables.
     * 
     * These are the local variables.
     * @param age 
     * @param id 
     * @param weight 
     */
    person(int age, int id, int weight)
    {
        this->age = age;
        this->id = id;
        this->weight = weight;
    }

    void getdata()
    {
        cout<<"age:id:weight"<<endl;
        cout<<age<<":"<<id<<":"<<weight<<endl;
    }
};

int main()
{
    person p1(35, 2332, 65);
    p1.getdata();
    return 0;
}
