

/* >>> Even Or Odd Program ( Version 2 ) <<< */

/* >>> A program that asks a person to enter two different numbers if the first is larger than the second, printed "first is the greatest" and if vice versa printed "second is the greatest" (using the boolean). <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void welcomeMassageFun();
/* bool evenOrOddFun(int num); */

int main()
{
    welcomeMassageFun();

    int num = 0;
    printf("Please enter a number : ");
    scanf("%d", &num);

    if ((num % 2 == 0) /* == true */)
    {
        printf("\nEven\n\n");
    }
    else
    {
        printf("\nOdd\n\n");
    }

    return 0;
}

// Functions ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Even Or Odd Program ( Version 2 ) ..\n\n");
}

/* // Even or odd function;
bool evenOrOddFun(int num)
{
    if (num % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
} */