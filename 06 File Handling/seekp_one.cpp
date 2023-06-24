#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream osf;
    osf.open("textone.txt", ios::in);

    char A[8] = "ABCDEFG";

    osf.seekp(5, ios_base::cur); // Putter moves 5 pose ahead of current position

    osf.write(A, 5); // Putter writes 5 chars in the variable to the file

    osf.close();
}