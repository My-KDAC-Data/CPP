
/*
Write a class to find volume of a Cylinder by using following members. (volume of
Cylinder=3.14 * radius * radius *height) (write a menu driven code for it and also use modular
approach)
Class having following member functions:
Cylinder()
Cylinder(double radius, double height)
getRadius()
setRadius()
getHeight()
setHeight()
getVolume()
printVolume()
Initialize members using constructor member initializer list.
*/

#include<iostream>
using namespace std;

class Volume
{
    private:

    double radius;
    double height;
    double volume;

    public:

    Volume()
    {   
    }

    Volume(double radius,double height) : radius(radius) , height(height)
    {
        
    }

    double getradius()
    {
        return this->radius;
    }

    void setradius(double radius)
    {
        cout<<"Enter the radius of cylinder=";
        cin>>this->radius;
    }

    double getheight()
    {
        return this->height;
    }

    void setheight(double height)
    {
        cout<<"Enter the height of cylinder=";
        cin>>this->height;
    }

    void getvolume()
    {
        volume=3.14*radius*radius*height;
        
        cout<<"Volume of Cylinder="<<volume<<endl;
        
    }

     void printvolume()
    {
        cout<<"**********************"<<endl;
        cout<<"Volume of Cylinder="<<volume<<endl;
    }
    

};

int menu()
{
    int choice;
    cout<<"***************MENU***********"<<endl;
    cout<<"0.EXIT\n1.Get Radius\n2.Set Radius\n3.Get Height\n4.Set Height\n5.Get Volume\n6.Print Volume\n"<<endl;
    cin>>choice;
    return choice;
}

enum cylindermenu
{
    EXIT,GET_RADIUS,SET_RADIUS,GET_HEIGHT,SET_HEIGHT,GET_VOLUME,PRINT_VOLUME
};

int main()
{
        int choice;

        Volume v1(10,5);

        while((choice = menu()) != 0)
        {
            switch(choice)
            {
                case GET_RADIUS: cout<<"Radius of Cylinder="<<v1.getradius();
                                 break;
                
                case SET_RADIUS:  v1.setradius(20);
                                  break;

                case GET_HEIGHT:  v1.getheight();
                                 break;   

                case SET_HEIGHT: v1.setheight(50);
                                    break;                           

                case GET_VOLUME: v1.getvolume();
                                  break;

                case PRINT_VOLUME: v1.printvolume();
                                    break;                
                        
            }
        }

    return 0;
}
