#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Seed the random number generator
    srand(time(NULL));

    // Generate a random number between 1 and 100
    int random_number = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed;

    // Print the random number
    // printf("The random number generated is: %d\n", random_number);

    do
    {
        printf("Guess the number:");
        scanf("%d", &guessed);
        if (guessed > random_number)
        {
            printf("lower number please\n");
        }
        else if (guessed < random_number)
        {
            printf("higher number please\n");
        }
        else
        {
            printf("congrats!!\n");
        }
        no_of_guesses++;
    } while (guessed != random_number);

    printf("you guesses the number in %d guesses", no_of_guesses);

    return 0;
}