#include <ncurses.h> //works as <conio.h> for lunix system
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

class atm
{
private:
    long int number;
    string name;
    int pin;
    double balance;
    string mobile_no;

public:
    void setDefault(long int ac_no, string ac_name, int ac_pin, double ac_balance, string ac_mobile_no)
    {
        number = ac_no;
        name = ac_name;
        pin = ac_pin;
        balance = ac_balance;
        mobile_no = ac_mobile_no;
    }

    long int getAccNo()
    {
        return number;
    }

    string getName()
    {
        return name;
    }

    int getPin()
    {
        return pin;
    }

    double getBalance()
    {
        return balance;
    }

    string getMobileNo()
    {
        return mobile_no;
    }

    void setMobile(string prev_mobile, string new_mobile)
    {
        if (prev_mobile == mobile_no)
        {
            mobile_no = new_mobile;
            cout << endl
                 << "Successfult Updated Mobile No.";
            getch();
        }
        else
        {
            cout << endl
                 << "Incorrect !!! Old Mobile Number. ";
            getch();
        }
    }

    void cashWithdraw(int acc_amount)
    {
        if (acc_amount > 0 && acc_amount < balance)
        {
            balance -= acc_amount;
            cout << "Please Collect your cash..." << endl;
            cout << "Available Balance :" << balance << endl;
            getch();
        }
        else
        {
            cout << "Invaild Input or Insufficient Balance." << endl;
            getch();
        }
    }
};

int main()
{
    int choice = 0, enterpin;
    long int enterAcc_no;

    system("clear");

    atm user1;

    user1.setDefault(1234567, "Viraj", 1111, 500000.0, "9380579476");

    do
    {
        system("clear");

        cout << "*****Welcome to ATM*****" << endl;
        cout << "Enter Your Account Number : ";
        cin >> enterAcc_no;

        cout << "Enter PIN :";
        cin >> enterpin;

        if ((enterAcc_no == user1.getAccNo() && (enterpin == user1.getPin())))
        {
            do
            {
                int amount = 0;
                string oldMobile, newMobile;

                // system("clear");

                cout << "*****Welcome to ATM*****" << endl;
                cout << "Select Options - " << endl;
                cout << "1. Check Balance." << endl;
                cout << "2. Cash Withdraw." << endl;
                cout << "3. Show User Details." << endl;
                cout << "4. Update Mobile Number." << endl;
                cout << "5. Exit" << endl;

                cin >> choice;

                switch (choice)
                {
                case 1:
                    cout << "Your Bank Balance :" << user1.getBalance() << endl;
                    getch();
                    break;

                case 2:
                    cout << "Enter the amount :";
                    cin >> amount;
                    user1.cashWithdraw(amount);
                    break;

                case 3:
                    cout << "***User Details***" << endl;
                    cout << "Accout Number :" << user1.getAccNo() << endl;
                    cout << "Name of User :" << user1.getName() << endl;
                    cout << "Balance available :" << user1.getBalance() << endl;
                    cout << "Mobile number :" << user1.getMobileNo() << endl;
                    cout << "Pin number :" << user1.getPin() << endl;
                    getch();
                    break;

                case 4:
                    cout << "Enter your old number :";
                    cin >> oldMobile;
                    cout << "Enter your new number :";
                    cin >> newMobile;

                    user1.setMobile(oldMobile, newMobile);
                    break;

                case 5:
                    exit(0);

                default:
                    cout << "Enter Vaild Data." << endl;
                }
            } while (1);
        }
        else
        {
            cout << "User Details are invaild !!!" << endl;
            getch();
        }
    } while (1);

    return 0;
}