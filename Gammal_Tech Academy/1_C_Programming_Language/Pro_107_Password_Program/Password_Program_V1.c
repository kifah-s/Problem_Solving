

/* >>> Password Program ( Version 1 ) <<< */

/* >>> A program that asks the user for the password if the user enters any number other than 12345 refers the question. If 12345 goes in it says "password is correct" (using do.. while ). <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Password Program ( Version 1 ) ..\n\n");

    int pass;
    do
    {
        printf("Please enter password : ");
        scanf("%d", &pass);

    } while (pass != 12345);

    printf("\nPassword is correct");

    printf("\n\n\n");

    return 0;
}