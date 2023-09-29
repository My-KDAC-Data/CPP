#include<iostream>
using namespace std;

class Employee
{
    private:

    int empid;
    float sal;

    public:

    Employee()
    {
        this->empid=0;
        this->sal=0;
    }

    Employee(int empid,float sal)
    {
        this->empid=empid;
        this->sal=sal;
    }

    int get_empid()
    {
        return this->empid;
    }

    void set_empid(int empid)
    {
        this->empid=empid;
    }

    float get_sal()
    {
        return this->sal;
    }

    void set_sal(float sal)
    {
        this->sal=sal;
    }

    void accept()
    {
        cout<<"Enter Empid=";
        cin>>this->empid;
        cout<<"Enter Salary=";
        cin>>this->sal;
    }

    void display()
    {
        cout<<"Empid="<<this->empid<<endl;
        cout<<"Salary="<<this->sal<<endl;
    }

};

class Manager: virtual public Employee
{
    private:

    float bonus;

    public:

    Manager()
    {
        this->bonus=0;
    }

    Manager(float bonus,int empid,float sal) : Employee (empid,sal)
    {
        this->bonus=bonus;
    }

    void set_bonus(float bonus)
    {
        this->bonus=bonus;
    }

    float get_bonus()
    {
        return this->bonus;
    }

    void accept()
    {
         Employee::accept();
  
    }
    void display()
    {
        Employee::display();    
    }
protected:

        void accept_manager()
        {
            cout<<"Enter Bonus Amount:";
            cin>>bonus;
        }

        void display_manager()
        {
            cout<<"Bonus Amount="<<this->bonus<<endl;   
        }
};

class Salesman : virtual public Employee
{
    private:
    float comm;
    public:
    Salesman()
    {
        this->comm=0;

    }
    Salesman(float comm,int empid,float sal) : Employee(empid,sal)
    {
        this->comm=comm;
    }
    float get_comm()
    {
        return this->comm;
    }
    void set_comm(float comm)
    {
        this->comm=comm;
    }
     void accept()
    {
        Employee::accept();    
    }
    void display()
    {
         Employee::display(); 
        
    }
protected:

    void accept_salesman()
        {
            cout<<"Enter commission Amount:";
            cin>>comm;
        }

        void display_salesman()
        {
            cout<<"Commission Amount="<<this->comm<<endl;
            
        }

};

class Sales_Manager : public Manager, public Salesman
{
    public:

    Sales_Manager()
    {
    }

    Sales_Manager(int empid,float sal,float bonus,float comm) : Manager(empid,sal,bonus),Salesman(empid,sal,comm),Employee(empid,sal)
    {
    }

    void accept()
    {   
         cout<<"Enter Sales_Manager Details:"<<endl;
        // Manager::accept();
        Salesman::accept();
        Manager::accept_manager();
        Salesman::accept_salesman();

    }

    void display()
    {
        cout<<"******************"<<endl;
        cout<<"Sales_Manager Details:"<<endl;
        // Manager::display();
        Salesman::display();
        Manager::display_manager();
        Salesman::display_salesman();
    }
};

int main()
{
    Sales_Manager s1;

     s1.accept();
     s1.display();
    cout<<"Salary="<<s1.get_sal()<<endl;
    cout<<"Empid="<<s1.get_empid()<<endl;
    s1.set_sal(50000);
    s1.set_bonus(9999);
    s1.display();

    Sales_Manager s2;

    s2.accept();
    s2.display();
    s2.set_empid(18);
    s2.set_sal(987654);
    s2.display();

    Sales_Manager s3(2,3500,24,30);

    s3.display();
    cout<<"Empid="<<s3.get_bonus()<<endl;
    s3.accept();
    s3.display();



    return 0;
}

