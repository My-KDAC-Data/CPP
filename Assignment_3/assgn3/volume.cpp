

#include"./volume.h"

    Volume::Volume()
    {   
    }

    Volume::Volume(double radius,double height) : radius(radius) , height(height)
    {
        
    }

    double Volume:: getradius()
    {
        return this->radius;
    }

    void Volume:: setradius(double radius)
    {
        cout<<"Enter the radius of cylinder=";
        cin>>this->radius;
    }

    double Volume:: getheight()
    {
        return this->height;
    }

    void Volume:: setheight(double height)
    {
        cout<<"Enter the height of cylinder=";
        cin>>this->height;
    }

    void Volume:: getvolume()
    {
        volume=3.14*radius*radius*height;
        
        cout<<"Volume of Cylinder="<<volume<<endl;
        
    }

    void Volume:: printvolume()
    {
        cout<<"***********VOLUME***********"<<endl;
        cout<<"Volume of Cylinder="<<volume<<endl;
    }
    


