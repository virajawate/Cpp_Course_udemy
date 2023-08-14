#include <iostream>

using namespace std;

int main()
{
    int n, m, q;
    cout << "Enter the numbers : ";
    cin >> n >> m;
    try
    {
        if (n > 0 && m > 0)
        {
            q = n / m;
            cout << q << endl;
        }
        else
        {
            throw m;
        }
    }
    catch (int x)
    {
        cout << "Exception : m is " << m << endl;
    }

    return 0;
}