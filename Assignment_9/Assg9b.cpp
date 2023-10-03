/*
Write a class to store Account information of Bank customer by using following class diagram.
Use enum to store information of account type. Create an array of 5 Accounts in main() and accept
their details from user. Write Menu driven program to deposit/withdraw amount from the account.
After each transaction display updated account balance. Provide appropriate getters/setters with
necessary validations. Throw exceptions for invalid values. Also implement an exception class
InsufficientFunds. In withdraw() member function, if sufficient balance is not available
in account, throw this exception.
*/



#include<iostream>
using namespace std;

enum account_type
{
    Saving=1,
    Current=2,
    DMAT=3
};

class insuff_balance
{
    private:

    int accid;
    double cur_bal;
    double withdraw_amt;

    public:

    // insuff_balance()
    // {

    // }

    insuff_balance(int accid,double cur_bal,double withdraw_amt)
    {
        this->accid=accid;
        this->cur_bal=cur_bal;
        this->withdraw_amt=withdraw_amt;
    }

    void display()
    {
        cout<<"**********Insufficient Funds*********"<<endl;
        cout<<"you cannot withdraw amount"<<endl;
        cout<<"Account Number:"<<this->accid<<endl;
        cout<<"Current Balance: "<<this->cur_bal<<" is less than withdrawn amount= "<<this->withdraw_amt<<endl;

    }

};

class account
{
   private:

   int id;
   double balance;
   account_type type;

   public:

   account()
   {
     this->balance=0;
     this->id=0;
    
   }
   account(int id,account_type type)
   {
        this->id=id;
        this->type=type;
   }
   void set_id(int id)
   {
    this->id=id;
   }

   int get_id()
   {
    return this->id;
   }

   void set_accounttype(account_type type)
   {
    this->type=type;
   }

   account_type get_accounttype()
   {
    return this->type;
   } 

   void accept()
   {
    int num;
    cout<<"Enter Bank Details:"<<endl;
    cout<<"Enter Bank Account Id=";
    cin>>id;
    cout<<"Enter Balance=";
    cin>>balance;
    cout<<"1.Saving"<<endl;
    cout<<"2.Current"<<endl;
    cout<<"3.DMAT"<<endl;
    cout<<"Enter Account type=";
    cin>>num;
    type=(account_type)num;
   }

    void display()
    {
        cout<<"*********Account Details**********"<<endl;
        cout<<"Account Id="<<this->id<<endl;
        cout<<"Balance="<<this->balance<<endl;
        cout<<"Account type= ";
        switch(account_type(type))
        {
            case 1: cout<<"Saving"<<endl;
                    break;
            case 2: cout<<"Current"<<endl;
                    break;
            case 3: cout<<"DMAT"<<endl;
                    break;                
        }
    }

    void deposit(double amt)
    {
        this->balance=this->balance+amt;
        cout<<"Total Balance="<<this->balance<<endl;
    }

    void withdraw(double amt)
    {
        if(amt > this->balance)
           throw insuff_balance(id,balance,amt);
        else
          this->balance=this->balance-amt;
          cout<<"Total Balance="<<this->balance<<endl;

    }
};

enum menulist
{      
    EXIT,
    ADDBAL,
    WITHDRAW,
    DISPLAY
};

int menu()
{
    int choice;
    cout<<"*****************************"<<endl;
    cout<<"0.EXIT\n1.Accept \n2.Deposit Amt\n3.Withdraw Amt\n4.Display"<<endl;
    cout<<"Enter your choice=";
    cin>>choice;
    return menulist(choice);

}

int main()
{
    int choice;
    int index=0;
    double depoamt,withdamt;
    account *arr[5];

    while((choice=menu()) != 0)
    {
        switch(choice)
        {
            case 1:
                    arr[index]=new account;
                    arr[index]->accept();
                    index++;
                    break;

            case 2:
                    cout<<"Enter the Amount to deposit:";
                    cin>>depoamt;
                    arr[index-1]->deposit(depoamt);
                    arr[index-1]->display();
                    break;

            case 3:
                    cout<<"Enter the amount to withdrawn:";
                    cin>>withdamt;

                    try
                    {
                        arr[index-1]->withdraw(withdamt);
                        arr[index-1]->display();

                    }
                    catch(insuff_balance e1)
                    {
                       e1.display(); 
                    }
                    break;

            case 4:
                    arr[index-1]->display();        
                     break;        

        }
    }


    for(int i=0; i<index; i++)
    {
        delete arr[i];
    }

    cout<<"Thanks for using our app......."<<endl;
    

    return 0;

}














