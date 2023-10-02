#include<iostream>
using namespace std;

class Date
{
    private:
    
    int day;
    int month;
    int year;

    public:

    Date()
    {
        this->day=01;
        this->month=01;
        this->year=2000;
    }
    Date(int day,int month,int year)
    {
        this->day=day;
        this->month=month;
        this->year=year;
    }

    void set_day(int day)
    {
        this->day=day;
    }

    int get_day()
    {
        return this->day;
    }

     void set_month(int month)
    {
        this->month=month;
    }

    int get_month()
    {
        return this->month;
    }

    void set_year(int year)
    {
        this->year=year;
    }

    int get_year()
    {
        return this->year;
    }

    void accept()
    {
        cout<<"Enter Day=";
        cin>>this->day;
        cout<<"Enter Month=";
        cin>>this->month;
        cout<<"Enter Year=";
        cin>>this->year;
    }

    void display()
    {
        cout<<this->day<<"/"<<this->month<<"/"<<this->year<<endl;
    }

    bool Is_Leap_year()
    {
        if (this->year % 4 == 0)
           return true;
        else 
            return false;   
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
        dob.accept();

    }

    void display()
    {
        cout<<"********************"<<endl;
        cout<<"Person Details:"<<endl;
        cout<<"Name of Person="<<this->name<<endl;
        cout<<"Address of Person="<<this->address<<endl;
        cout<<"Date of Birth="<<endl;
        dob.display();
    }
 };

class Employee : public Person
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
        this->empid=empid;
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
        this->sal=sal;
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
        doj.accept();
        Person::accept();
    }

    void display()
    {
        cout<<"********************"<<endl;
        cout<<"Employee Details:"<<endl;
        cout<<"Empid="<<this->empid<<endl;
        cout<<"Deptname="<<this->deptname<<endl;
        cout<<"Salary="<<this->sal<<endl;
        doj.display();
        Person::display();

    }
};   

 int main()
    {
        Employee e1;
        e1.accept();
        e1.display();
        cout<<"Dept Name="<<e1.get_deptname()<<endl;

        Person p1;
        p1.accept();
        p1.display();
        cout<<"Name="<<p1.get_name()<<endl;

        Employee e2;
        e2.accept();
        e2.display();
        e2.set_name("Suresh");
        e2.set_address("Kalamb");
        e2.display();

        Employee e4;
        e4.accept();
        e4.display();
        cout<<"Dept Name="<<e4.get_deptname()<<endl;
        e4.display();

        




        return 0;
    }
 