

/* >>> From Num To Num Program ( Version 5 ) <<< */

/* >>> A program that asks a person to enter two numbers and prints the numbers from the first to the second and prints the total numbers. <<< */

#include <stdio.h>

void welcomeMassageFun();
int from_num_to_num();

int main()
{
    welcomeMassageFun();
    from_num_to_num();

    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in From Num To Num Program ( Version 5 ) ..\n\n");
}

// from num to num function;
int from_num_to_num()
{
    int glo_var_1, glo_var_2;

    // Receive values from the user;
    printf("Please enter first number : ");
    scanf("%d", &glo_var_1);

    printf("Please enter second number : ");
    scanf("%d", &glo_var_2);

    printf("\n");

    // Declaration the counter, variable and Printing numbers;
    int i, sum = 0;
    for (i = glo_var_1; i <= glo_var_2; i++)
    {
        printf("%d  ", i);
        sum = sum + i;
    }
    printf("\n\nSum numbers = %d", sum);

    printf("\n\n\n");
}