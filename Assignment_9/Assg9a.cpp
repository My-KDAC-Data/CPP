/*
Write a user defined function factorial() that calculates factorial of given number and it throws
exception if number entered by user is negative.
*/



#include<iostream>
using namespace std;

int factorial(int num)
{
    int fact=1;
    if(num < 0)
     throw 1;
    else
     for(int i=1; i<=num; i++)
     {
        fact=fact*i;
     }

     return fact;
}

int main()
{
    int num;
    cout<<"Enter number for finding factorial=";
    cin>>num;

    try
    {
        cout<<"Factorial="<<factorial(num)<<endl;
    }

    catch(int error)
    {
        cout<<"You entered negative number......."<<endl;
    }

    cout<<"Successfully Executed...."<<endl;
    return 0;
}