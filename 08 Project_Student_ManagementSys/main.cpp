// Header Files
#include <iostream>
#include <fstream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

// Function Declaration

void Project();
void AddData();
void DisplayData();
void DeleteData();
void GetTrash();
void Getchoose(int);

// Student Class

class Student
{
    // Member Variables

    int adminNo;
    char std_name[20];
    char std_gender;
    int grade;
    float mark_std;
    double std_precent;

public:
    // Member Functions

    void GetData();
    void ShowData();
    int GetAdminNo() { return adminNo; }
} data; // Objects of the Class

// Main Function
int main()
{

    Project(); // Function Call
    return 0;
}

// Project Function Declaration
void Project()
{
    int ch;
    do
    {
        system("cls"); // Clear Screen

        cout << "********** STUDENT MANAGEMENT SYSTEM **************" << endl;
        cout << "1. Show the Register." << endl         // Read Data from file
             << "2. Enter Student Information." << endl // Add Student data file
             << "3. Delete Information." << endl        // Remove Data from File
             << "4. Get Delted Information." << endl
             << "0. Exit" << endl;
        cout << "Enter your Choice : ";
        cin >> ch;
        Getchoose(ch);
    } while (ch);
}

void Getchoose(int mode)
{
    switch (mode)
    {
    case 1:
        AddData();
        break;
    case 2:
        DisplayData();
        break;
    case 3:
        DeleteData();
        break;
    case 4:
        GetTrash();
        break;
    }
    system("pause");
}

void AddData()
{
    ofstream fout;
    fout.open("Students.txt", ios::out | ios::app | ios::binary);   
    data.GetData();
    fout.write((char *)&data, sizeof(data));
    fout.close();
    cout << "\n\n -------------- DATA SAVED ------------- \n\n";
}

void DisplayData()
{
    ifstream fin;
    fin.open("Students.txt", ios::in | ios::binary);
    while (fin.read((char *)&data, sizeof(data)))
    {
        data.ShowData();
    }
    fin.close();
    cout << "\n\n ---------------- DATA READING DONE ---------------- \n\n";
}

void DeleteData()
{
    int n, flag = 0;
    ifstream fin;
    ofstream fout, tout;

    fin.open("Students.txt", ios::in | ios::binary);
    fout.open("Temperary.txt", ios::out | ios::app | ios::binary);
    tout.open("Trash.txt", ios::out | ios::app | ios::binary);

    cout << "Enter the Adimission Number : ";
    cin >> n;

    while (fin.read((char *)&data, sizeof(data)))
    {
        if (n == data.GetAdminNo())
        {
            data.ShowData();
            tout.write((char *)&data, sizeof(data));
            cout << "This Record " << n << " has been sent to trash \n";
            flag++;
        }
        else
        {
            fout.write((char *)&data, sizeof(data));
        }
    }

    fout.close();
    tout.close();
    fin.close();

    if (flag == 0)
        cout << "***      NO RECORD FOUND     ***\n\n";

    remove("Students.txt");
    rename("Temperary.txt", "Students.txt");
}

void GetTrash()
{
    ifstream fin;
    fin.open("Trash.txt", ios::in | ios::binary);

    while (fin.read((char *)&data, sizeof(data)))
    {
        data.ShowData();
    }

    fin.close();

    cout << "*****  DONE READING DATA FROM TRASH FILE  *****\n";
}

void Student::GetData()
{
    cout << "\n\n *******Enter Student Data********\n";
    cout << "Admission Number: ";
    cin >> adminNo;
    cout << "Name of the Student: ";
    cin.getline(std_name, 20);
    cout << "Gender: ";
    cin >> std_gender;
    cout << "Class: ";
    cin >> grade;
    cout << "Student Marks(max 500): ";
    cin >> mark_std;
    std_precent = (mark_std / 500) * 100;
    cout << endl;
}

void Student::ShowData()
{
    cout << "\n\n *******Student Data********\n";
    cout << "Admission Number: " << adminNo << endl;
    cout << "Name of the Student: " << std_name << endl;
    cout << "Gender: " << std_gender << endl;
    cout << "Class: " << grade << endl;
    cout << "Student Marks(max 500): " << mark_std << endl;
    cout << "Student Percentage: " << std_precent << endl;
    cout << endl;
}

/*-----------END OF PROGRAM---------------*/
