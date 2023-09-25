/*
Q.2)Write a menu driven program for Date in a CPP language using structure and also using class.
Date is having data members day, month, year. Implement the following functions.
void initDate();
void printDateOnConsole();
void acceptDateFromConsole();
bool isLeapYear();
*/

#include <iostream>

using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;

public:
    void initDate()
    {
        this->day = 02;
        this->month = 03;
        this->year = 2020;
        cout << " The default date on console:" << endl;
        cout << "The Date is:" << day << "/" << month << "/" << year << endl;
    }

    void printDateOnConsole()
    {
        cout << "The Date is:" << day << "/" << month << "/" << year << endl;
    }

    void acceptDateOnConsole()
    {
        cout << "enter the Date:" << endl;
        cin >> this->day >> this->month >> this->year;
    }

    bool isLeapYear()
    {
        if (this->year != 0)
            if ((this->year % 4 == 0) && (this->year % 100 != 0) || (this->year % 400 == 0) && (this->year % 4 == 0))
                return 1;
            else
                return 0;
        else
            return 0;
    }
};

int main()
{
    int choice;
    Date d1;

    do
    {
        cout << "Enter your Choice:" << endl;
        cout << "1.Print default date\n2.Accept the date\n3.Print Date on Console\n4.cheak leap year\n5.Exit\n"
             << endl;
        cin >> choice;

        switch (choice)
        {
            case 1 : 
                    d1.initDate();
                    break;

            case 2:
                    d1.acceptDateOnConsole();
                    break;

            case 3:
                    d1.printDateOnConsole();
                    break;

            case 4:
                    if(d1.isLeapYear())  
                    cout<<"The year is leap year"<<endl;

                    else
                    cout<<"The is not leap year"<<endl;                      
        }


    }while (choice != 5);

    return 0;
}
