

/* >>> Number 10 Program ( Version 4 ) <<< */

/* >>> Write a program. If the user enters a number greater than 10, he will be printed "greater than 10", and if he enters a smaller number, he will print "less than 10", and if he enters the same 10, he will print "equal 10". <<< */

#include <stdio.h>

void welcomeMassageFun();
int getNumberFun();
int number10Fun(int number);

int main()
{
    welcomeMassageFun();
    
    number10Fun(getNumberFun());

    return 0;
}

// Functions..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Number 10 Program ( Version 4 ) ..\n\n");
}

// Get Number function;
int getNumberFun()
{
    int number;
    printf("Please enter the number : ");
    scanf("%d", &number);
    return number;
}

// Number 10 Function;
int number10Fun(int number)
{
    if (number > 10)
    {
        printf("\nGreater than 10\n\n\n");
    }
    else if (number < 10)
    {
        printf("\nLess than 10\n\n\n");
    }
    else
    {
        printf("\nEqual 10\n\n\n");
    }
}