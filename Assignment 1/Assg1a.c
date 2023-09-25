/*
Q1. Write a menu driven program for Date in a C. Declare a structure Date having data members
day, month, year. Implement the following functions.
void initDate(struct Date* ptrDate);
void printDateOnConsole(struct Date* ptrDate);
void acceptDateFromConsole(struct Date* ptrDate);
*/



#include<stdio.h>
#include<stdlib.h>
struct Date
{
    int date;
    int month;
    int year;
};

void initDate(struct Date* ptrDate)
{
    ptrDate->date=01;
    ptrDate->month=18;
    ptrDate->year=22;
}

void printDateOnConsole(struct Date* ptrDate)
{
    printf("the date in day,month,year format\n");
    printf("Date is: %d/%d/%d\n",ptrDate->date,ptrDate->month,ptrDate->year);

}

void acceptDateOnConsole(struct Date* ptrDate)
{
    printf(" Enter The date in day,month,year format\n");
    scanf("%d%d%d",&ptrDate->date,&ptrDate->month,&ptrDate->year);

}

int main()
{
    int choice;
    struct Date d1;

    do
    {
        printf("Enter your choice:\n");
        printf("1.Print default date\n2.Accept the date\n3.Display the date\n4.Exit\n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                     initDate(&d1);
                     printDateOnConsole(&d1);
                    break;

            case 2:
                    acceptDateOnConsole(&d1);
                     break;

            case 3:
                    printDateOnConsole(&d1);
                    break;

            default:
                    printf("invalid choice.....");              

        }

        
    }while(choice !=4);
    return 0;
 }       
        
    







