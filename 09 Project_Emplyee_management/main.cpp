#include <iostream>
#include <fstream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

// Main Data Manager
void Manager();

// Data Manipualtors
void Add_empData();
void Display_empData();
void Delete_Data();
void Trashing_Data();
void Choose_manip(int);

// Employee entity
class Employee
{
    // Employee Structure
    int emp_id;
    int sprint_pnts;
    char emp_name[50];
    char emp_gender;
    char emp_grade[50];
    double emp_salary;

public:
    // Employee Characters
    void GetData();
    void ShowData();
    int GetEmpId() { return emp_id; }

} emp; // Employee Instance

// Main Function
int main()
{
    Manager();
    return 0;
}

void Manager()
{
    int ch;

    do
    {
        system("cls");

        cout << "********** EMPLOYEEE MANAGEMENT SYSTEM **********" << endl
             << "1. Show the register." << endl
             << "2. Enter Employee Data." << endl
             << "3. Delete Information." << endl
             << "4. Get Deleted Information." << endl
             << "0. Exit System." << endl;
        cout << "ENter the choice : " << endl
             << "-> ";
        cin >> ch;
        Choose_manip(ch);
    } while (ch);
}

void Choose_manip(int mode)
{
    switch (mode)
    {
    case 1:
        Display_empData();
        break;
    case 2:
        Add_empData();
        break;
    case 3:
        Delete_Data();
        break;
    case 4:
        Trashing_Data();
        break;
    }
    system("pause");
}

// Manipulation Funtions
void Add_empData()
{
    ofstream fout;
    fout.open("Employee_data.txt", ios::out | ios::app | ios::binary);
    emp.GetData();
    fout.write((char *)&emp, sizeof(emp));
    fout.close();
    cout << "\n\n ************ INFORMATION SAVED ************ \n\n";
}

void Display_empData()
{
    ifstream fin;
    fin.open("Employee_data.txt", ios::in | ios::binary);
    while (fin.read((char *)&emp, sizeof(emp)))
    {
        emp.ShowData();
    }
    fin.close();
    cout << "\n\n ************ INFORMATION READ ************ \n\n ";
}

void Delete_Data()
{
    int n, flag = 0;
    ifstream fin;
    ofstream fout, tout;

    fin.open("Employee_data.txt", ios::in | ios::binary);
    fout.open("Tempery.txt", ios::out | ios::app | ios::binary);
    tout.open("Trash.txt", ios::out | ios::app | ios::binary);

    cout << "Enter the employee number :";
    cin >> n;

    while (fin.read((char *)&emp, sizeof(emp)))
    {
        if (n == emp.GetEmpId())
        {
            emp.ShowData();
            tout.write((char *)&emp, sizeof(emp));
            cout << "This Record - " << n << " has been moved to trash \n";
            flag++;
        }
        else
        {
            fout.write((char *)&emp, sizeof(emp));
        }
    }

    fout.close();
    tout.close();
    fin.close();

    if (flag == 0)
        cout << "****     NO RECORD FOUND     *****\n\n";

    remove("Employee_data.txt");
    rename("Temperary.txt", "Employee_data.txt");
}

void Trashing_Data()
{
    ifstream fin;
    fin.open("Trash.txt", ios::in | ios::binary);

    while (fin.read((char *)&emp, sizeof(emp)))
    {
        emp.ShowData();
    }

    fin.close();
    cout << "************ INFORMATION TRASHED ************\n\n";
}

void Employee::GetData()
{
    cout << "\n\n         ENTER EMPLOYEE INFORMATION          \n\n";
    cout << "Employee ID : ";
    cin >> emp_id;
    cin.ignore();
    cout << "Employee Name : ";
    cin.getline(emp_name, 20);
    cout << "Employee Gender:";
    cin >> emp_gender;
    cout << "Employee Grade :";
    cin >> emp_grade;
    cout << "Employee Salary:";
    cin >> emp_salary;
    cout << endl;
}

void Employee::ShowData()
{
    cout << "\n\n         EMPLOYEE INFORMATION          \n\n";
    cout << "Employee ID : " << emp_id << endl;
    cout << "Employee Name : " << emp_name << endl;
    cout << "Employee Gender:" << emp_gender << endl;
    cout << "Employee Grade :" << emp_grade << endl;
    cout << "Employee Salary:" << emp_salary << endl;
    cout << endl;
}

/**     PROGRAM ENDED      **/