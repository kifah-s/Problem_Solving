

//* Brand Length Program (Version 2).

/*
 * Write a program to display the length of each brand.
 */

/*
! Output:
! Brand Length:
! Length of Mercedes: 8
! Length of BMW: 3
! Length of Mazda: 5
! Length of Mercedes: 8
! Length of BMW: 3
! Length of Mercedes: 8
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
void printLengthOfBrandFun(char arr[][25], int arrLen);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Arrays and Variables.
    char brandMenu[][25] = {"Mercedes", "BMW", "Mazda", "Mercedes", "BMW", "Mercedes"};
    int arrLength = sizeof(brandMenu) / sizeof(brandMenu[0]);

    // Call Functions.
    printLengthOfBrandFun(brandMenu, arrLength);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Brand Length Program (Version 2) ..\n\n");
}

// Print length of brand - Function.
void printLengthOfBrandFun(char arr[][25], int arrLen)
{
    printf("Brand Length:\n");
    for (int i = 0; i < arrLen; i++)
    {
        int braLen = strlen(arr[i]);
        printf("Length of brand %s: %d\n", arr[i], braLen);
    }
}
//* End Function ..
