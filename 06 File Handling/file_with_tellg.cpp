#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in_f;
    int pos;
    char ch;

    try{
        in_f.open("textone.txt");
        in_f>>ch;
    }catch(...){
        std::cout<<"File not Located"<<endl;
    }

    while(!in_f.eof()){
        pos = in_f.tellg();
        std::cout<<ch;
        in_f>>ch;
        
        if(pos%4 == 0 )
            std::cout<<"\t"<<pos<<endl;
    }

    in_f.close();
    return 0;
}