#include <iostream>
using namespace std;

int main()
{
    int score = 0;

    cout << "Enter your score : ";
    cin >> score;

    if (score >= 80 && score < 100)
    {
        cout << "Distiction" << endl;
    }
    else if (score >= 75 && score < 80)
    {
        cout << "Excellent" << endl;
    }
    else if (score >= 60 && score < 75)
    {
        cout << "Good" << endl;
    }
    else if (score >= 40 && score < 60)
    {
        cout << "Passed" << endl;
    }
    else if (score >= 0 && score < 40)
    {
        cout << "Failed" << endl;
    }
    else
    {
        cout << "Invalid score." << endl;
    }

    return 0;
}