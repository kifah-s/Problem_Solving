

/* >>> Amusement Program ( Version 2 ) <<< */

/* >>> Amusement Program : A new amusement park has been established with a strange system.. Each person pays for the entrance ticket according to his age.. If the person is 10 years old, he pays 10 pounds, and so on.. Ahmed, Sherif and Dina went to the amusement park and wanted to know the total amount they would pay.
Required : Write a program that records the age of 3 people in variables and prints the amount they will pay in amusement parks on the screen. <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Amusement Program ( Version 2 ) ..\n\n");

    int ahmad = 10,
        sharef = 15,
        diana = 20,
        total = ahmad + sharef + diana;

    printf("Total = %d\n\n\n", total);

    return 0;
}