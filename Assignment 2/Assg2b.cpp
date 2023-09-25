/*
 Write a class Address. Implement constructors, getters, setters, accept(), and display() methods.
    Instead of char[] use string datatype.
*/

#include<iostream>
using namespace std;

class Address
{
    string building;
    string street;
    string city;
    int pin;

    public:

    Address()
    {
        this->building="Kanha";
        this->street="Main Road";
        this->city="Terkheda";
        this->pin=413525;
    }

    Address(string building,string street,string city,int pin)
    {
        this->building=building;
        this->street=street;
        this->city=city;
        this->pin=pin;
    }

    void Accept()
    {
        cout<<"Enter your Address="<<endl;
        cin>>building>>street>>city>>pin; 
    }

    void Display()
    {
        cout<<"Address Details are:"<<endl;
        cout<<"Building Name="<<this->building<<endl;
        cout<<"Street Name="<<this->street<<endl;
        cout<<"City Name="<<this->city<<endl;
        cout<<"Pin Code="<<this->pin<<endl;
    }

    string get_building()
    {
        return this->building;
    }

    string get_street()
    {
        return this->street;
    }

    string get_city()
    {
        return this->city;
    }

    int get_pin()
    {
        return this->pin;
    }

    void set_building(string building)
    {
        cout<<"enter building name:"<<endl;
        cin>>this->building;
    }

    void set_street(string street)
    {
         cout<<"enter street name:"<<endl;
         cin>>this->street;

    }

    void set_city(string city)
    {
        cout<<"enter city name:"<<endl;
        cin>>this->city;
       
    }

    void set_pin(int pin)
    {
        cout<<"enter the pincode:"<<endl;
        cin>>this->pin;
    }

};

int main()
{
    Address a1;

    a1.Accept();

    a1.Display();

    cout<<"****Getters******"<<endl;

    cout<<"Building="<<a1.get_building()<<endl;
    cout<<"street=" <<a1.get_street()<<endl;
    cout<<"City="<<a1.get_city()<<endl;
    cout<<"PinCode="<<a1.get_pin()<<endl;

    cout<<"****Setters*******"<<endl;

    a1.set_building("Rajarambapu");
    a1.set_street("Vita_Road");
    a1.set_city("Islampur");
    a1.set_pin(411008);

    a1.Display();

    Address a2("kanha","road","osmanabad",432565);
    a2.Display();


    return 0;
}
