#include <iostream>

using namespace std;

class parent
{
    public:
        virtual void show() = 0;
};

class boy : public parent
{
    public:
        void show()
        {
            cout<<"Straight face"<<endl;
        }
};

class girl : public parent
{
    public:
        void show()
        {
            cout<<"Round face"<<endl;
        }
};

int main()
{
    parent *ptr;

    ptr = new boy();

    ptr->show();

    ptr = new girl();

    ptr->show();

    return 0;    
}