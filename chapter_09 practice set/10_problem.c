/*Write a structure capable of storing date. Write a function to compare those 
dates. using typedef
*/
#include <stdio.h>

 typedef struct date{
    int day;
    int month;
    int year;
}Date;

int main (){
    Date d1 = {1, 01, 2021};
    Date d2 = {1, 01, 2025};

    
    if (d1.year == d2.year && d1.month == d2.month && d1.day == d2.day)
    {
        printf("Dates are equal\n");
    }
    else if (d1.year > d2.year)
    {
        printf("Date 1 is greater than Date 2\n");
    }
    else if (d1.year < d2.year)
    {
        printf("Date 1 is smaller than Date 2\n");
    }
    else if (d1.month > d2.month)
    {
        printf("Date 1 is greater than Date 2\n");
    }
    else if (d1.month < d2.month)
    {
        printf("Date 1 is smaller than Date 2\n");
    }
    else if (d1.day > d2.day)
    {
        printf("Date 1 is greater than Date 2\n");
    }
    else if (d1.day < d2.day)
    {
        printf("Date 1 is smaller than Date 2\n");
    }
    else
    {
        printf("Invalid dates\n");
    }

    
    return 0;
}