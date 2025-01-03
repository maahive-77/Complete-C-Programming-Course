## Strings in C

A String in C programming is a sequence of characters terminated with a null character ‘\0’. 
The C String is stored as an array of characters. The difference between a character array and a C string is that the string in C is terminated with a unique character ‘\0’.
 
    
   ![image](https://github.com/user-attachments/assets/ce75e4ae-526f-42f7-ae27-16ede6dd485a) 
   

# Creating a String in C
Let us create a string "Hello". It comprises five char values. In C, the literal representation of a char type uses single quote symbols − such as 'H'. These five alphabets put inside single quotes, followed by a null character represented by '\0' are assigned to an array of char types. The size of the array is five characters plus the null character − six.

Example
char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};

# Printing a String (Using %s Format Specifier)
C provides a format specifier "%s" which is used to print a string when you're using functions like printf() or fprintf() functions.

Example
The "%s" specifier tells the function to iterate through the array, until it encounters the null terminator (\0) and printing each character. This effectively prints the entire string represented by the character array without having to use a loop.

---
#include <stdio.h>

int main (){

   char greeting[] = {'H', 'e', 'l', 'l', 'o', '\0'};
   printf("Greeting message: %s\n", greeting );

return 0;

}

Output
It will produce the following output −
Greeting message: Hello

---
You can declare an oversized array and assign less number of characters, to which the C compiler has no issues.
However, if the size is less than the characters in the initialization, you may get garbage values in the output.

char greeting[3] = {'H', 'e', 'l', 'l', 'o', '\0'};

printf("%s", greeting);

Constructing a String using Double Quotes

Instead of constructing a char array of individual char values in single quotation marks, and using "\0" as the last element, C lets you construct a string by enclosing the characters within double quotation marks. This method of initializing a string is more convenient, as the compiler automatically adds "\0" as the last character.

Example
Open Compiler
#include <stdio.h>

int main() {
  // Creating string
  char greeting[] = "Hello World";

  // Printing string
  printf("%s\n", greeting);

  return 0;
}

Output
It will produce the following output −
Hello World

---
## String Input Using scanf()
Declaring a null-terminated string causes difficulty if you want to ask the user to input a string. 
You can accept one character at a time to store in each subscript of an array, with the help of a for loop =


Syntax

for(i = 0; i < 6; i++){

   scanf("%c", &greeting[i]);
}
greeting[i] = '\0';

Example

In the following example, you can input a string using scanf() function, after inputting the specific characters (5 in the following example), we are assigning null ('\0') to terminate the string.

printf("Starting typing... ");

for (i = 0; i < 5; i++) {
  scanf("%c", &greeting[i]);
}

// Assign NULL manually
greeting[i] = '\0';

// Printing the string
printf("Value of greeting: %s\n", greeting);

 Output
Run the code and check its output −

Starting typing... Hello

Value of greeting: Hello

---

# Example
It is not possible to input "\0" (the null string) because it is a non-printable character. To overcome this, the "%s" format specifier is used in the scanf() statement −


#include <stdio.h>
#include <string.h>

int main (){

   char greeting[10];

   printf("Enter a string:\n");
   scanf("%s", greeting);

   printf("You entered: \n");
   printf("%s", greeting);

   return 0;
}

Output

Run the code and check its output −

Enter a string:

Hello

You entered:

Hello
