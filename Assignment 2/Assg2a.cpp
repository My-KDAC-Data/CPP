/*
Create a namespace NStudent. Create the Student class(created as per assignment-1 Q3) inside
namespace. Test the functionalities
*/

#include<iostream>
using namespace std;

namespace Nstudent
{
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
        cout<<this->rollNo<<endl;
        cout<<this->name<<endl;
        cout<<this->marks<<endl;
          
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
        cout<<"Roll no="<<this->rollNo<<endl;
        cout<<"Name="<<this->name<<endl;
        cout<<"Marks="<<this->marks<<endl;
    }
    
  };

}

int main()
{
    int choice;
    Nstudent::Student s1;

    do
    { 
        cout<<"1.Print Defult Details of Student\n2.Accept the details of student\n3.Display the details of student\n4.Exit\n"<<endl;
        cout<<"Enter your choice=";
        cin>>choice;

         switch(choice)
        {
            case 1:
                    s1.initStudent();
                    break;

            case 2:
                    s1.acceptStudentOnConsole();
                    break;

            case 3:
                    s1.printStudentOnConsole();
                    break;
        }

    }while(choice != 5);


    return 0;
}
