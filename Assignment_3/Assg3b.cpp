
/*
Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a fifty-cent toll.
Mostly they do, but sometimes a car goes by without paying.
The tollbooth keeps track of the number of cars that have gone by and of the total amount of money
collected. Model this tollbooth with a class called tollbooth.
The two data items are a type unsigned int to hold the total number of cars, and a type double to
hold the total amount of money collected.
A constructor initializes all data members to 0. A member function called payingCar() increments
the car total and adds 0.50 to the cash total. An other function, called nopayCar()
increments the car total but adds nothing to the cash total. Finally, a member function called
printOnConsole() displays the two totals and number of paying as well as non paying cars total.
( write a menu driven code for it)
*/

#include<iostream>
using namespace std;

class tollbooth
{
    private:

    int No_of_Cars;
    double Total_money;
    int total_car;

    public:

    tollbooth()
    {
        this->No_of_Cars=0;
        this->Total_money=0;
    }

    void payingcar()
    {
        
        cout<<" No of car passing to tollbooth gives toll:"<<endl;
        cin>>No_of_Cars;
        Total_money=No_of_Cars*.50;
        cout<<"total no of cars passed gives toll:"<<No_of_Cars<<endl;
        cout<<"Total Money="<<Total_money<<endl; 
    
    }

    void nonpaycar()
    {
        
        cout<<" No of car passing to tollbooth not gives toll:"<<endl; 
       cin>>No_of_Cars;
       total_car = No_of_Cars;
       Total_money=Total_money+0;
       cout<<"total no of cars passed not gives toll:"<<No_of_Cars<<endl;
       cout<<"Total Money="<<Total_money<<endl;
       
    
       
    }

    void printOnConsole()
     {
       cout<<"total no of cars passed gives toll:"<<(Total_money/0.50)<<endl;
       cout<<"total no of cars passed not gives toll:"<<total_car<<endl;
       cout<<"total no of cars who passed the tollbooth:"<<((Total_money/0.50)+total_car)<<endl;
       cout<<"Total Money Collected="<<Total_money<<endl;
       cout<<"***************************"<<endl;
     }


};

int main()
{
    tollbooth t1;
    int choice;

    do
    {
        cout<<"1.No of Paying cars\n2.No of non Paying cars\n3.Total no cars\n4.EXIT\n"<<endl;
        cout<<"enter your choice"<<endl;
        cin>>choice;

        switch(choice)
        {
            case 1:
                    t1.payingcar();
                    break;
            case 2:
                    t1.nonpaycar();
                    break;
            case 3:   
                    t1.printOnConsole();
                    break;
            default:
                    cout<<"invalid choice......"<<endl;

            
        }
    }while(choice != 5);

    cout<<"Have a good Journey......."<<endl;
    

    return 0;
}
