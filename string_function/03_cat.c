#include <stdio.h>

// Function to calculate the length of a string
int mystrlen(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;  // Return the length of the string (excluding null terminator)
}

// Function to concatenate two strings
void mystrcat(char target[], char source[]) {
    int target_len = mystrlen(target);
    int i = 0;

    // Append the source string to the target string
    while (source[i] != '\0') {
        target[target_len + i] = source[i];
        i++;
    }
    // Add null terminator to the concatenated string
    target[target_len + i] = '\0';
}

int main() {
    char source[] = "sajna";
    char target[30] = "sanji ";

    mystrcat(target, source);

    printf("Source string: %s\n", source);
    printf("Target string: %s\n", target);

    return 0;
}
