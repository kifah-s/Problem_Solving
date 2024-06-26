

/* >>> Enter 25 Numbers Program ( Version 3 ) <<< */

/* >>> A program that asks the user to enter 25 consecutive numbers and printed by the other 5 digits in a line and printed by their total (using 2D array). <<< */

#include <stdio.h>

int enter_25_numbers();

int main()
{
    printf("\n\nYou welcome in Enter 25 Numbers Program ( Version 3 ) ..\n\n");

    enter_25_numbers();

    return 0;
}

// Functions ..
// enter 25 numbers function;
int enter_25_numbers()
{
    // Definition Arrays;
    int num[5][5] = {{1, 1, 1, 1, 1},
                     {1, 1, 1, 1, 1},
                     {1, 1, 1, 1, 1},
                     {1, 1, 1, 1, 1},
                     {1, 1, 1, 1, 1}};

    // Definition Counters;
    int i, j, sum = 0;

    // Print the values;
    printf("\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d\t", num[i][j]);
            sum = sum + num[i][j];
        }
        printf("\n");
    }
    printf("\nThe sum all numbers =  %d", sum);

    printf("\n\n\n");
}