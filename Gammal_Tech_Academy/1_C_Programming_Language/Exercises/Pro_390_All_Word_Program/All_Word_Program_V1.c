

/* >>> All Words Program ( Version 1 ) <<< */

/* >>> A program that asks the user to write a sentence with a maximum of 400 characters and prints all the words that the user wrote (in two different ways). <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void welcomeMassageFun();
void getStringFun(char string[400]);
void printStringFun(char string[400]);

int main()
{
    welcomeMassageFun();

    char string[400];

    getStringFun(string);

    printStringFun(string);

    return 0;
}

// Functions ..
// Welcome massage / function.
void welcomeMassageFun()
{
    printf("\n\nYou welcome in All Words Program ( Version 1 ) ..\n\n");
}

// Get string from user / Function.
void getStringFun(char string[400])
{
    printf("Please enter a sentence: ");
    scanf("%[^\n]", string);
}

// Print string / Function.
void printStringFun(char string[400])
{
    printf("\n%s\n\n", string); // printing a string as a string.
}