#include <iostream>

using namespace std;
class Base_car
{
public:
    void body()
    {
        cout << "Simple Body of the Car" << endl;
    }
    void breaks()
    {
        cout << "Simple Breaks" << endl;
    }
    void doors()
    {
        cout << "Simple doors" << endl;
    }
    void windows()
    {
        cout << "Simple windows" << endl;
    }
    void tyers()
    {
        cout << "Simple Tyers" << endl;
    }
};

class sports_car : public Base_car
{
public:
    void breaks()
    {
        cout << "Upgraded ABS Breaks" << endl;
    }
    void tyers()
    {
        cout << "Upgraded Sports tyers" << endl;
    }
    void windows()
    {
        cout << "Upgraded power windows" << endl;
    }
    void engine()
    {
        cout << "Upgraded turbo engine,\t Less milege." << endl;
    }
};

class seden_car : public Base_car
{
public:
    void body()
    {
        cout << "Upgraded aerodynamic body" << endl;
    }
    void breaks()
    {
        cout << "Upgraded ABS Breaks" << endl;
    }
    void windows()
    {
        cout << "Upgraded power windows" << endl;
    }
    void engine()
    {
        cout << "Upgraded engine,\t good milege" << endl;
    }
};

int main()
{
    Base_car *sprt_ptr;
    sprt_ptr = new sports_car();
    cout << "----Basic Car with sports car----" << endl;
    sprt_ptr->body();
    sprt_ptr->breaks();
    sprt_ptr->doors();
    sprt_ptr->tyers();
    sprt_ptr->windows();

    Base_car *seden_ptr;
    seden_ptr = new seden_car();
    cout << "----Basic Car with seden car----" << endl;
    seden_ptr->body();
    seden_ptr->breaks();
    seden_ptr->doors();
    seden_ptr->tyers();
    seden_ptr->windows();

    cout << endl
         << "----Now Sports car----" << endl;
    sports_car *sport;
    sport = new sports_car();
    sport->body();
    sport->breaks();
    sport->doors();
    sport->engine();
    sport->tyers();
    sport->windows();

    cout << endl
         << "----Now seden car----" << endl;
    seden_car *seden;
    seden = new seden_car();
    seden->body();
    seden->breaks();
    seden->doors();
    seden->engine();
    seden->tyers();
    seden->windows();
    cout << endl;
    return 0;
}