#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream of;
    of.open("textone.txt");
    of<<"Hey!! File world"<<endl;
    of.close();
    return 0;
}