

/* >>> Greater Or Smaller Than 20 Program ( Version 2 ) <<< */

/* >>> A program that asks the user to enter a number if the number is greater than 20 prints all the numbers from 20 to this number, and if smaller than 20 prints all the numbers from this number to 20. <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Greater Or Smaller Than 20 Program ( Version 2 ) ..\n\n");

    int num, i;

    printf("Please enter number Greater or smaller than 20 : ");
    scanf("%d", &num);

    if (num > 20)
    {
        i = 20;
        while (i <= num)
        {
            printf("\n%d", i);
            i++;
        }
    }
    else if (num < 20)
    {
        i = num;
        while (i <= 20)
        {
            printf("\n%d", i);
            i++;
        }
    }
    else
    {
        printf("\n%d = 20", num);
    }
    printf("\n\n\n");

    return 0;
}