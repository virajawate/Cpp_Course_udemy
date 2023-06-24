#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream apf;
    apf.open("textone.txt", ios::app);
    int pose = apf.tellp();
    std::cout<<pose<<endl;
    apf<<"Here we learn File Handling"<<endl;
    pose = apf.tellp();
    std::cout<<pose<<endl;
    apf.close();
    return 0;
}