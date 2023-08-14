#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in_f;
    char A[15];

    for (int i = 0; i < 15; i++)
    {
        A[i] = 0;
    }

    in_f.open("textone.txt");

    in_f.seekg(-5, ios_base::end);
    in_f.read(A, 5);

    for (int i = 0; i < 15; i++)
    {
        std::cout << A[i] << "\t";
    }

    in_f.close();
}