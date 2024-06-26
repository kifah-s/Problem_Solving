

/* >>> Array Size Program ( Version 2 ) <<< */

/* >>> A program that asks the user to enter two numbers expressing the size of the 2D array and records the numbers that will be written and printed in the other and printed together. <<< */

#include <stdio.h>

void welcomeMassageFun();
int arr_size();

int main()
{
    welcomeMassageFun();
    arr_size();

    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Array Size Program ( Version 2 ) ..\n\n");
}

// arr size function;
int arr_size()
{
    // Definition numbers;
    int num_1, num_2;

    // Receive values from the user;
    printf("Please enter two numbers that represent the size of the array : \n");
    printf("The first number : ");
    scanf("%d", &num_1);

    printf("The second number : ");
    scanf("%d", &num_2);

    // Definition array;
    int arr[num_1][num_2];

    // Print numbers;
    printf("\nSize array is : [%d][%d]", num_1, num_2);

    // Sum numbers;
    printf("\n\nSum numbers is : %d", num_1 + num_2);

    printf("\n\n\n");
}