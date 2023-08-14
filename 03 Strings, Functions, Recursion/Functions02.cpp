#include <iostream>
#include <string>
using namespace std;

int add(int, int);
float add(float, float);
string add(string, string);

int main()
{
    int a, b, sum;
    float num1, num2, decsum;
    string var1, var2, concat;

    cout << endl
         << "Enter 1st string :";
    getline(cin, var1);
    cout << "Enter 2nd string :";
    getline(cin, var2);

    cout << "Enter number :";
    cin >> a >> b;

    cout << "Enter decimals :";
    cin >> num1 >> num2;

    sum = add(a, b);
    cout << sum << endl;

    decsum = add(num1, num2);
    cout << decsum << endl;

    concat = add(var1, var2);
    cout << concat << endl;

    return 0;
}

int add(int x, int y)
{
    int sum = 0;
    sum = x + y;
    return sum;
}

float add(float x, float y)
{
    float sum = 0;
    sum = x + y;
    return sum;
}

string add(string x, string y)
{
    string sum = "";
    sum = x + y;
    return sum;
}