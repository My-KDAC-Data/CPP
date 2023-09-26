



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


#include"./volume.h"
#include"./cylinder.h"
#include<iostream>
using namespace std;




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

                case GET_HEIGHT:  cout<<"Radius of height="<<v1.getheight();
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
