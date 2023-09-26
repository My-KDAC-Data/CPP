/*
Write a menu driven program to calculate volume of the box(length * width * height).
Provide necessary constructors.
*/

#include<iostream>
using namespace std;

class Volume
{
    private:
    double length;
    double width;
    double height;
    double volume;

    public:

     Volume()
    {
        this->length=10;
        this->width=10;
        this->height=10;
        volume=length*width*height;
        cout<<"Volume of box:"<<volume<<endl;
  
    }

   
    void Accept_data()
    {
        cout<<"Enter the dimensions of cylinder:"<<endl;
        cin>>length;
        cin>>width;
        cin>>height;
    }

    void Display_data()
    {
        cout<<"Dimensions of box:"<<endl;
        cout<<"Length="<<this->length<<endl;
        cout<<"Width="<<this->width<<endl;
        cout<<"Height="<<this->height<<endl;
        
    }
    void Cal_volume_box()
    {
        volume=length*width*height;
        cout<<"Volume of box="<<volume<<endl;
    }

};

int main()
{
    Volume v1;
    int choice;

    do
    {
        cout<<"1.Accept the dimesions of box\n2.Display the Dimensions of box\n3.Calculate volume of box\n4.Exit\n"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>choice;

        switch(choice)
        {
            case 1:
                    v1.Accept_data();
                    break;

            case 2:
                    v1.Display_data();
                    break;

            case 3:
                    v1.Cal_volume_box();
                    break;   
            default:
                    cout<<"Invalid choice....."<<endl;            
        }
        
    }while (choice != 5);

    return 0;
}
