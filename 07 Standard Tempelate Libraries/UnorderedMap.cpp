#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map<int, string> students;
    unordered_map<int, string> empoyee = {{1001, "Vikram"}, {1002, "Ravesh"}, {1003, "Ram"}, {104, "Gorav"}};

    /*
    Printing the Map using iterator....
    */
    for (unordered_map<int, string>::iterator i = empoyee.begin(); i != empoyee.end(); i++)
    {
        cout << i->first << ":" << i->second << endl;
    }
    cout << endl;

    /*
    Altering DATA
    */
    cout << "Altering the data @ 104" << endl;
    empoyee[104] = "Viraj";
    cout << "Value at 104 : " << empoyee.at(104) << endl;
    cout << "Value by [104] : " << empoyee[104] << endl;

    /*
    Inserting the data
    */
    students.insert(pair<int, string>(1, "Goat"));
    students.insert(pair<int, string>(2, "Roaw"));
    students.insert(make_pair(12, "Heener"));
    cout << endl;
    for (unordered_map<int, string>::iterator i = students.begin(); i != students.end(); i++)
    {
        cout << i->first << ":" << i->second << endl;
    }
    cout << endl;

    /*
    Deleting data from map
    */
    cout << endl << "Deleting the top of empoyee...." << endl;
    unordered_map<int, string>::iterator del = empoyee.begin();
    empoyee.erase(del);
    for (unordered_map<int, string>::iterator i = empoyee.begin(); i != empoyee.end(); i++)
    {
        cout << i->first << ":" << i->second << endl;
    }
    cout << endl;

    cout << "Employee Dataset" << endl;
    for (unordered_map<int, string>::iterator i = empoyee.begin(); i != empoyee.end(); i++)
    {
        cout << i->first << ":" << i->second << endl;
    }
    cout << endl;

    cout << "Student Dataset" << endl;
    for (unordered_map<int, string>::iterator i = students.begin(); i != students.end(); i++)
    {
        cout << i->first << ":" << i->second << endl;
    }
    cout << endl;

    cout << "Swapping the dataset" << endl;
    empoyee.swap(students);
    cout << endl;

    cout << "Employee Dataset" << endl;
    for (unordered_map<int, string>::iterator i = empoyee.begin(); i != empoyee.end(); i++)
    {
        cout << i->first << ":" << i->second << endl;
    }
    cout << endl;

    cout << "Student Dataset" << endl;
    for (unordered_map<int, string>::iterator i = students.begin(); i != students.end(); i++)
    {
        cout << i->first << ":" << i->second << endl;
    }
    cout << endl;

    // count : Return number of elements matching with given key.
    cout << "Count No of 201 : " << empoyee.count(201) << endl;

    // size : Returns the number of elements in the unordered_map.
    cout << "No of Elements : " << empoyee.size() << endl;

    return 0;
}