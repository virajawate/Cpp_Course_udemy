#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char ch;
    ifstream in_f;
    in_f >> ch;

    try
    {
        in_f.open("textone.txt");
    }
    catch (...)
    {
        std::cout << "File not located" << endl;
    }

    while (!in_f.eof())
    {
        std::cout << ch;
        in_f >> ch;
    }

    in_f.close();
    return 0;
}