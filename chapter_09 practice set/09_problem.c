//Write a structure capable of storing date. Write a function to compare those dates.

#include <stdio.h>
struct date{
    int day;
    int month;
    int year;
};

int compare_dates(struct date d1, struct date d2){
    if(d1.year == d2.year && d1.month == d2.month && d1.day == d2.day){
        return 0;
    }

    if (d1.year > d2.year)
    {
        return 1;
    }
    if (d1.year < d2.year)
    {
        return -1;
    }
    if (d1.month > d2.month)
    {
        return 1;
    }
    if (d1.month < d2.month)
    {
        return -1;
    }
    if (d1.day > d2.day)
    {
        return 1;
    }
    if (d1.day < d2.day)
    {
        return -1;
    }

    return 0;

}
int main (){

    // dd/mm/yyyy
    
    struct date d1 = {1, 01, 2021};  
    struct date d2 = {1, 01, 2025};
    int result = compare_dates(d1, d2);
    printf("-------------------------\n");
    printf("The result is %d\n", result);

    if (result == 0)
    {
        printf("Dates are equal\n");
    }
    else if (result == 1)
    {
        printf("Date 1 is greater than Date 2\n");
    }
    else
    {
        printf("Date 2 is greater than Date 1\n");
    }

    printf("-------------------------");

    printf("\n");
    
    printf("Thank you!\n");
    printf("maahi..\n");


    return 0;
}