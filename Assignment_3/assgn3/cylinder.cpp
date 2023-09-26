
#include"./cylinder.h"
#include<iostream>
using namespace std;

int menu()
{
    int choice;
    
    cout<<"\n0.EXIT\n1.Get Radius\n2.Set Radius\n3.Get Height\n4.Set Height\n5.Get Volume\n6.Print Volume\n"<<endl;
    cin>>choice;
    return choice;
}