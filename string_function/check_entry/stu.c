// just fun and this program ask you to type your name , and it check your name against a friends list to see if you are worthy of enter to the palace.
#include <stdio.h>
#include <string.h>
#define FOUND 1
#define NOTFOUND 0

int main()
{
    char Friends_list[10][10] = {
        "moon", "ankita", "sanna", "miaw", "lawany", "maahi", "anikt", "stone", "my Bacha"};
    int i, ID_Card, a;
    char Your_Name[10];

    printf("yes sir/ madam, what can i help you!\n");
    
    printf(" please, Enter Your Name :");
    scanf("%s", Your_Name);

    ID_Card = NOTFOUND;
    for (i = 0; i <= 5; i++)
    {
        a = strcmp(&Friends_list[i][0], Your_Name);
        if (a == 0)
        {
            printf("WElcome,you can enter the palace.\n");
            ID_Card = FOUND;
            break;
        }
    }
    if (ID_Card == NOTFOUND)
    {
        printf("sorry, you are a trespasse and please contact my manager.\n");
    }

    return 0;
}