#include <iostream>

using namespace std;

//Parent class
class rectangle
{
    
public:
    int length = 0, breadth = 0;
    void showdata()
    {
        cout << "Length : " << length << ", breadth : " << breadth << endl;
    }

    int Area()
    {
        return (length*breadth);
    }
};

// Inherting class : Child class
class cuboid : public rectangle
{
public:
    int height = 0;
    void showdata()
    {
        cout << "Length : " << length << ", breadth : " << breadth << ", height : " << height << endl;
    }
    int volume()
    {
        return (length*breadth*height);
    }
};

int main()
{
    /**
     * @brief Inheritance
     * Inheritance of parent class to child class
     * Inheritance will only transfer 
     * class memebers and member functions
     * Inheritance don't transfer the data of the class
    */

    rectangle rt;
    rt.length = 10;
    rt.breadth = 6;

    cuboid cbd;
    cbd.length = 10;
    cbd.breadth = 5;
    cbd.height = 12;
    
    rt.showdata();
    cbd.showdata();

    cout<<"Area of rectangle : "<<rt.Area()<<endl;
    cout<<"Area of rectangle : "<<cbd.Area()<<endl;
    cout<<"Volume of cuboid : "<<cbd.volume()<<endl;

    return 0;
}
