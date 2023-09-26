
#ifndef VOLUME_H
#define VOLUME_H

#include<iostream>
using namespace std;


class Volume
{
    private:

    double radius;
    double height;
    double volume;

    public:
        Volume();
Volume(double radius, double height);
double getradius();
void setradius(double radius);
double getheight();
void setheight(double height);
void getvolume();
void printvolume();

};

#endif