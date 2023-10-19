

/* >>> Amusement Program ( Version 4 ) <<< */

/* >>> Amusement Program : A new amusement park has been established with a strange system.. Each person pays for the entrance ticket according to his age.. If the person is 10 years old, he pays 10 pounds, and so on.. Ahmed, Sherif and Dina went to the amusement park and wanted to know the total amount they would pay.
Required : Write a program that records the age of 3 people in variables and prints the amount they will pay in amusement parks on the screen. <<< */

#include <stdio.h>

void wel_mas_fun();
void amu_fun(int ahmad, int sharef, int diana);

int main()
{
    wel_mas_fun();
    amu_fun(10 ,15, 20);
    
    return 0;
}

// Functions ..

// Welcome massage function;
void wel_mas_fun()
{
    printf("\n\nYou welcome in Amusement Program ( Version 4 ) ..\n\n");
}

// Amusement function;
void amu_fun(int ahmad, int sharef, int diana)
{
    int total = ahmad + sharef + diana;

    printf("Total = %d\n\n\n", total);
}