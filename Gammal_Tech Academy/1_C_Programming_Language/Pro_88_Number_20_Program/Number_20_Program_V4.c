

/* >>> Number 20 Program ( Version 4 )  <<< */

/* >>> A program that requests the user to enter a number if the number is greater than 20 prints all the numbers from 20 to this number, and if smaller than 20 prints all the numbers from this number to 20. <<< */

#include <stdio.h>

void welcomeMassageFun();
int number20Fun();

int main()
{
    welcomeMassageFun();
    number20Fun();
    
    return 0;
}

// Functions..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Number 20 Program ( Version 4 ) ..\n\n");
}

// Number 20 function;
int number20Fun()
{
    int i, num;

    printf("\nEnter any number lager 20 OR smaller 20 : ");
    scanf("%d", &num);

    if (num > 20)
    {
        for (i = 20; i <= num; i++)
        {
            printf("\n%d", i);
        }
        printf("\n\n\n");
    }
    else
    {
        for (i = num; i <= 20; i++)
        {
            printf("\n%d", i);
        }
        printf("\n\n\n");
    }
}