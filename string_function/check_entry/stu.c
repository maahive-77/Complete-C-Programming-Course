#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define FOUND 1
#define NOTFOUND 0

// Function to convert a string to lowercase for case-insensitive comparison
void toLowerCase(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

int main() {
    // Friend list
    char Friends_list[10][10] = {
        "moon", "ankita", "sanna", "miaw", 
        "lawany", "maahi", "anikt", "stone", 
        "bacha", "friend"};

    char Your_Name[20];
    int ID_Card, a, i;
    char retry;

    do {
        // Prompt for user input
        printf("Yes sir/madam, what can I help you with!\n");
        printf("Please, enter your name: ");
        scanf("%s", Your_Name);

        // Convert input to lowercase for case-insensitive comparison
        toLowerCase(Your_Name);

        ID_Card = NOTFOUND;

        // Check against the friend list
        for (i = 0; i < 10; i++) {
            char friendName[10];
            strcpy(friendName, Friends_list[i]);
            toLowerCase(friendName); // Convert friend name to lowercase

            a = strcmp(friendName, Your_Name);
            if (a == 0) {
                // Special welcome messages for Maahi, Sanna, and Moon
                if (strcmp(Your_Name, "maahi") == 0) {
                    printf("Welcome, King Maahi! You are the heart of this palace, and it shines brighter because of you.\n");
                } else if (strcmp(Your_Name, "sanna") == 0) {
                    printf("Welcome, Sanna! Your friendship is the treasure that makes this palace truly royal.\n");
                } else if (strcmp(Your_Name, "moon") == 0) {
                    printf("Welcome, Moon! You light up the world of your close friends like the moon in the night sky.\n");
                } else if (strcmp(Your_Name, "ankita") == 0) {
                    printf("Welcome, Ankita! Your creativity is unmatched.\n");
                } else if (strcmp(Your_Name, "miaw") == 0) {
                    printf("Welcome, Miaw! Your love for animals warms everyone's heart.\n");
                } else {
                    printf("Welcome, you can enter the palace.\n");
                }
                ID_Card = FOUND;
                break;
            }
        }

        // Message for trespassers
        if (ID_Card == NOTFOUND) {
            printf("Sorry, you are a trespasser. Please contact my manager.\n");
        }

        // Ask if the user wants to retry
        printf("Would you like to try again? (y/n): ");
        scanf(" %c", &retry);

    } while (retry == 'y' || retry == 'Y');

    return 0;
}
