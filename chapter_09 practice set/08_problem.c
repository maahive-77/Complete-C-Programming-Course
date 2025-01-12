/*Create a structure representing a bank account of a customer. What fields did 
you use and why?
*/
#include <stdio.h>

struct bank_account
{
    int account_no;
    char name[20];
    char ifsc_code[10];
    int balance;
    char address[50];
    char phone_no[10];
};

int main (){
    struct bank_account b1;
    b1.account_no = 123456;
    b1.balance = 10000;
    strcpy(b1.ifsc_code, "SBIN0001234");
    strcpy(b1.name, "Rahul");
    strcpy(b1.address, "Delhi");
    strcpy(b1.phone_no, "1234567890");


    printf("Account number = %d\n", b1.account_no);
    printf("Name = %s\n", b1.name);
    printf("IFSC code = %s\n", b1.ifsc_code);
    printf("Balance = %d\n", b1.balance);
    printf("Address = %s\n", b1.address);
    printf("Phone number = %s\n", b1.phone_no);


    

    return 0;
}