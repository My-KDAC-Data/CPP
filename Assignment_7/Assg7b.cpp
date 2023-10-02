#include<iostream>
using namespace std;

class Product
{
    private:

    int id;
    string title;

    protected:

    int price;

    public:

    Product()
    {
    }

    Product(int id,string title,int price) : id(id),title(title),price(price)
    {
    }

    int get_price()
    {
        return this->price;
    }

     virtual void acceptdata()
    {
        // cout<<"Enter Product Details:"<<endl;
        cout<<"Enter product Id= ";
        cin>>this->id;
        cout<<"Enter product Title= ";
        cin>>this->title;
        cout<<"Enter product Price= ";
        cin>>this->price;
    }
     virtual void display()
    {
        cout<<"Id="<<this->id<<endl;
        cout<<"Title="<<this->title<<endl;
        cout<<"Price="<<this->price<<endl;
    }

    virtual int Cal_Discount()=0;

    int Cal_finalprice()
    {
        return price-Cal_Discount();
    }

};

class Book : public Product
{
    private:

    string author;

    public:
     
    Book()
    {

    }

    Book(int id,string title,int price ,string author): Product (id,title,price)
    {
        this->author=author;
    }
    
    void acceptdata()
    {
        cout<<"Enter Book Details:"<<endl;
        Product::acceptdata();
        cout<<"Enter Book Author= ";
        cin>>this->author;
    }
    
    void display()
    {
        cout<<"*********************"<<endl;
        cout<<"Book Details:"<<endl;
        Product::display();
        cout<<"Author="<<this->author<<endl;     
        cout<<"*********************"<<endl;
      
    }

    int Cal_Discount()
    {
        return price * 0.10;
    }
};

class Tape : public Product
{
    private:

    string artist;

    public:
    
    Tape()
    {

    }

    Tape(int id,string title,int price,string artist) :Product (id,title,price)
    {
        this->artist=artist;
    }

    void acceptdata()
    {
        cout<<"Enter Tape Details:"<<endl;
        Product::acceptdata();
        cout<<"Enter Tape Artist=";
        cin>>this->artist;
    }

    void display()
    {
        cout<<"*********************"<<endl;
        cout<<"Tape Details:"<<endl;
        Product::display();
        cout<<"Artist="<<this->artist<<endl;
        cout<<"*********************"<<endl;
      
    }

     int Cal_Discount()
    {
        return price * 0.05;
    }


};

int menu()
{
    int choice;
    cout<<"*****************"<<endl;
    cout<<"0.EXIT"<<endl;
    cout<<"1.Add Book"<<endl;
    cout<<"2.Add Tape"<<endl;
    cout<<"enter your choice=";
    cin>>choice;
    return choice;

}

int main()
{
    int choice;
    int index=0;
    Product *arr[3];

    while((choice=menu()) != 0)
    {
        switch (choice)
        {
        case 1: 
             if(index < 3)
             {
                    arr[index]=new Book;
                    arr[index]->acceptdata();
                    arr[index]->Cal_Discount();
                    arr[index]->Cal_finalprice();
                    index++;
              }
              else
              {
                    cout<<"Product limit reached already 3 products added."<<endl;
              }
              break;
        
        case 2:
              if(index < 3)
              {
                    arr[index]=new Tape;
                    arr[index]->acceptdata();
                    arr[index]->Cal_Discount();
                    arr[index]->Cal_finalprice();
                    index++;
              }
              else
              {
                    cout<<"Product limit reached already 3 products added."<<endl;
              }
              break;
        default:
                cout<<"Wrong Choice....."<<endl;
                break;

        }
    }

    // for total bill
    int total_bill=0;
    for(int i=0; i<index; i++)
    {
        total_bill += arr[i]->Cal_finalprice();
    }
    cout<<"Total Bill="<<total_bill<<endl;


    // for deallocating memory

    for(int i=0; i<index; i++)
    {
        delete arr[i];
        arr[i]=NULL;
    }

    return 0;
}
