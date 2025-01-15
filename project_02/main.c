#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int player, computer = rand() % 3;
    /* 0 --> snake
    1-->water
    2 --> gun*/
    printf("choose 0 for snake, 1 for water and 2 for gun\n");
    scanf("%d", &player);
    printf("player choose %d\n", player);
    printf("computer choose %d\n", computer);

    if (player == 0 && computer == 0)
    {
        printf("Game draw!\n");
    }
    else if (player == 0 && computer == 1)
    {
        printf("player wins!\n");
    }
    else if (player == 0 && computer == 2)
    {
        printf("you Lose\n");
    }
    else if (player == 1 && computer == 0)
    {
        printf("you Lose\n");
    }
    else if (player == 1 && computer == 1)
    {
        printf("Game draw\n");
    }
    else if (player == 1 && computer == 2)
    {
        printf("player wins!\n");
    }
    else if (player == 2 && computer == 0)
    {
        printf("player wins!\n");
    }
    else if (player == 2 && computer == 1)
    {
        printf("you Lose\n");
    }
    else if (player == 2 && computer == 2)
    {
        printf("Game draw\n");
    }
    else
    {
        printf("something went worng!\n");
    }

    printf("-----------------GAME OVER-----------------\n");

    printf("\n");

    printf("Thank you!\n");
    printf("maahi..\n");

    return 0;
}