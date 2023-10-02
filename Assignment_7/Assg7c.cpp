#include<iostream>
using namespace std;

class Employee
{
    private:

    int empid;
    float sal;

    protected:
    string desg;

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

    string get_desg()
    {
        return this->desg;
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

     virtual void accept()
    {
        cout<<"Enter Empid=";
        cin>>this->empid;
        cout<<"Enter Salary=";
        cin>>this->sal;
    }

    virtual void display()
    {
        cout<<"Empid="<<this->empid<<endl;
        cout<<"Salary="<<this->sal<<endl;
        cout<<"Designation="<<this->desg<<endl;

    }

};

class Manager : virtual public Employee

{
    private:

    float bonus;

    public:

    Manager()
    {
        this->desg="Manager";
        this->bonus=0; 
    }

    Manager(float bonus)
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
         cout<<"Enter Bonus Amount:";
        cin>>bonus;
         
    }
    void display()
    {
        Employee::display(); 
        cout<<"Bonus Amount="<<this->bonus<<endl;
 
        
    }
// protected:

//         void accept_manager()
//         {
//             cout<<"Enter Bonus Amount:";
//             cin>>bonus;
//         }

//         void display_manager()
//         {
//             cout<<"Bonus Amount="<<this->bonus<<endl;   
//         }
};
class Salesman : virtual public Employee
{
    private:
    float comm;

    public:

    Salesman()
    {
        this->desg="Salesman";
        this->comm=0;
    }
    Salesman(float comm)
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
        cout<<"Enter commission Amount:";
        cin>>comm;
            
    }
    void display()
    {
         Employee::display();
         cout<<"Commission Amount="<<this->comm<<endl;
        
        
    }
// protected:

//     void accept_salesman()
//         {
//             cout<<"Enter commission Amount:";
//             cin>>comm;
//         }

//         void display_salesman()
//         {
//             cout<<"Commission Amount="<<this->comm<<endl;
            
//         }

};

class Sales_Manager : public Manager, public Salesman
{
    public:

    Sales_Manager()
    {
        this->desg="Salesmanager";
    }

    Sales_Manager(int empid,float sal,float bonus,float comm) : Employee(empid,sal),Manager(bonus),Salesman(comm)
    {
    }

    void accept()
    {   
         cout<<"Enter Sales_Manager Details:"<<endl;
        Manager::accept();
        Salesman::accept();
        // Manager::accept_manager();
        // Salesman::accept_salesman();

    }

    void display()
    {
        cout<<"******************"<<endl;
        cout<<"Sales_Manager Details:"<<endl;
        Manager::display();
        Salesman::display();
        // Manager::display_manager();
        // Salesman::display_salesman();
    }
};

int menu()
{
    int choice;
    cout<<"******************"<<endl;
    cout<<"0.EXIT"<<endl;
    cout<<"1.Add Manager"<<endl;
    cout<<"2.Add Salesman"<<endl;
    cout<<"3.Add Salesmanager"<<endl;
    cout<<"4.Display count designations"<<endl;
    cout<<"5.Display all employees"<<endl;
    cin>>choice;
    return choice;
}

int main()
{
    int choice;
    Employee *arr[10];
    int index=0;

    int mgrcnt=0,salmncnt=0,salmgrcnt=0;

    while((choice=menu())!= 0)
    {
        switch(choice)
        {
            case 1:
                    if(index < 10)
                    {
                        arr[index]=new Manager();
                        arr[index]->accept();
                        index++;
                    }
                    else
                    {
                        cout<<"Employee limit has reached to 10"<<endl;
                    }
                    break;

                    case 2:
                    if(index < 10)
                    {
                        arr[index]=new Salesman();
                        arr[index]->accept();
                        index++;
                    }
                    else
                    {
                        cout<<"Employee limit has reached to 10"<<endl;
                    }
                    break;
                    
                    case 3:
                    if(index < 10)
                    {
                        arr[index]=new Sales_Manager();
                        arr[index]->accept();
                        index++;
                    }
                    else
                    {
                        cout<<"Employee limit has reached to 10"<<endl;
                    }
                    break;

                    case 4:
                            for(int i=0; i<10; i++)
                            {
                                if(arr[i]->get_desg()== "Manager");
                                mgrcnt++;

                                if(arr[i]->get_desg()== "Salesman");
                                salmncnt++;

                                if(arr[i]->get_desg()== "Salesmanager");
                                salmgrcnt++;
                                  
                            }

                            cout<<"Designation Manager Count="<<mgrcnt<<endl;
                            cout<<"Designation Salesman Count="<<salmncnt<<endl;
                            cout<<"Designation Manager Count="<<salmgrcnt<<endl;
                            break;

                    case 5:
                            for(int i=0; i<index; i++)
                            {
                                arr[i]->display();
                            }    
                            break;   
            }

        }

        for(int i=0; i<index ; i++)
        {
            delete arr[i];
        }
    
        cout<<"Thanks for using our app ............."<<endl;
    return 0;
}
