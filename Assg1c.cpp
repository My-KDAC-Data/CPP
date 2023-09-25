/*
Write a menu driven program for Student in CPP language. Create a class student with data
members roll no, name and marks. Implement the following functions
void initStudent();
void printStudentOnConsole();
void acceptStudentFromConsole();
*/

#include<iostream>
using namespace std;

class Student
{
    private:

    int rollNo;
    string name;
    int marks;

    public:

    void initStudent()
    {
        cout<<"Student Details:"<<endl;
        this->rollNo=01;
        this->name="Shubham";
        this->marks=90;
        cout<<rollNo<<endl;
        cout<<name<<endl;
        cout<<marks<<endl;
          
    }

    void acceptStudentOnConsole()
    {
        cout<<"Enter Student Details:"<<endl;
        cin>>rollNo;
        cin>>name;
        cin>>marks;

    }

    void printStudentOnConsole()
    {
        cout<<"The Student Details are:"<<endl;
        cout<<"Roll no="<<rollNo<<endl;
        cout<<"Name="<<name<<endl;
        cout<<"Marks="<<marks<<endl;
    }
    
};

int main()
{
    int choice;
    Student s1;

    do
    {
        cout<<"1.Print Defult Details of Student\n2.Accept the details of student\n3.Display the details of student\n4.Exit\n"<<endl;
        cout<<"Enter your choice=";
        cin>>choice;

        switch(choice)
        {
            case 1:
                    s1.initStudent();

            case 2:
                    s1.acceptStudentOnConsole();

            case 3:
                    s1.printStudentOnConsole();
        }

    }  while(choice != 5); 
    
   cout<<"Thanks for using our app to see student details..."<<endl;
   
   
    return 0;
}
