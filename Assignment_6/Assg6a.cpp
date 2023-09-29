#include<iostream>
using namespace std;
 
class  Date
{
    private:

    int day;
    int month;
    int year;

    public:

    Date()
    {
        this->day=0;
        this->month=0;
        this->year=0;
    }

    Date(int day,int month,int year)
    {
        this->day=day;
        this->month=month;
        this->year=year;
    }

    int get_day()
    {
        return this->day;
    }

    void set_day(int day)
    {
        cout<<"Enter day=";
        cin>>this->day;
    }

    int get_month()
    {
        return this->month;
    }

    void set_month(int month)
    {
        cout<<"Enter month=";
        cin>>this->month;
    }

     int get_year()
    {
        return this->year;
    }

    void set_year(int year)
    {
        cout<<"Enter year=";
        cin>>this->year;
    }

    void acceptDate()
    {
        cout<<"Enter Day=";
        cin>>this->day;
        cout<<"Enter month=";
        cin>>this->month;
        cout<<"Enter year=";
        cin>>this->year;
    }

    void displayDate()
    {
        //cout<<"Date:"<<endl;
        cout<<this->day<<"/"<<this->month<<"/"<<this->year<<endl;
    }

    bool Is_leap_year()
    {
        
        if (this->year%4==0)
            return true;
        else
             return false;    
    }
}; 

class Employee
{
    private:

    int empid;
    string deptname;
    float sal;
    Date doj;

    public:

    Employee()
    {
        this->empid=0;
        this->deptname="";
        this->sal=0;    
    }

    Employee(int empid,string deptname,float sal,Date doj)
    {
        this->empid=empid;
        this->deptname=deptname;
        this->sal=sal; 
        this->doj=doj;

    }

    int get_empid()
    {
        return this->empid;
    }

    void set_empid(int empid)
    {
        cout<<"Enter Empid=";
        cin>>this->empid;
    }

    string get_deptname()
    {
        return this->deptname;
    }

    void set_deptname(string deptname)
    {
        
        this->deptname=deptname;  
    }

    float get_sal()
    {
        return this->sal;
    }

    void set_sal(float sal)
    {
        cout<<"Enter sal=";
        cin>>this->sal;
    }

    Date get_doj()
    {
        return this->doj;
    }

    void set_doj(Date doj)
    {
       this->doj=doj;
    }

    void accept()
    {
        cout<<"Enter Empid=";
        cin>>this->empid;
        cout<<"Enter Deptname=";
        cin>>this->deptname;
        cout<<"Enter Salary=";
        cin>>this->sal;
        cout<<"Date of Joining:"<<endl;
        doj.acceptDate();
    }

    void display()
    {
        cout<<"Employee Details:"<<endl;
        cout<<"Empid="<<this->empid<<endl;
        cout<<"Deptname="<<this->deptname<<endl;
        cout<<"Salary="<<this->sal<<endl;
        doj.displayDate(); 
        if (doj.Is_leap_year())
        cout<<"year is Leap year"<<endl;
        else
         cout<<"year is not Leap year"<<endl;

    }
};   

 class Person
 {
    private:

    string name;
    string address;
    Date dob;

    public:

    Person()
    {
        this->name="Shubham";
        this->address="At post Terkheda";
    }

    Person(string name,string address,Date dob)
    {
        this->name=name;
        this->address=address;
    }

    string get_name()
    {
        return this->name;
    }

    void set_name(string name)
    {
        this->name=name;
    }

    string get_address()
    {
        return this->address;
    }

    void set_address(string address)
    {
        this->address=address;
    }   

    Date get_dob()
    {
       return this->dob;
    }
    void set_dob(Date dob)
    {
        this->dob=dob;
    }

    void accept()
    {
        cout<<"Enter Name of Person=";
        cin>>name;
        cout<<"Enter Address of Person=";
        cin>>address;
        dob.acceptDate();

    }

    void display()
    {
        cout<<"Person Details:"<<endl;
        cout<<"Name of Person="<<this->name<<endl;
        cout<<"Address of Person="<<this->address<<endl;
        cout<<"Date of Birth="<<endl;
        dob.displayDate();
    }
 };




int main()
{
    Employee e1;
    
    e1.accept();
    e1.display();
    e1.set_sal(3000);
    e1.get_sal();
    cout<<"New Salary="<<e1.get_sal()<<endl;
    e1.display();
    Date d1(22,05,2023);
    e1.set_doj(d1);
    e1.display();
    e1.accept();
    e1.display();
    e1.set_deptname("Transport");
    e1.display();


    Person p1;

    p1.accept();
    p1.display();
    p1.set_address("Solapur");
    p1.display();
    Date d1;
    cout<<"date of birth:";
    d1=p1.get_dob();
    d1.displayDate();
    Date d2(3,8,2025);
    p1.set_dob(d2);
    p1.display();
    p1.set_name("Suresh");
    p1.display();

    return 0;
}
