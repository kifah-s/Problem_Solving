

//* Replace all Vowels Program (Version 2).

/*
 * Write a program to replace all vowels in a given brand with '*'.
 */

/*
! Input:
! Please enter a brand: Mercedes

! Output:
! Brand after replacing vowels: M*rc*d*s
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
void printNewArrayFun(char bra[25], char sym);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Arrays and Variables.
    // char brandMenu[][25] = {"Mercedes", "BMW", "Mazda", "Mercedes", "BMW", "Mercedes"};
    // int arrLength = sizeof(brandMenu) / sizeof(brandMenu[0]);
    char brand[25], symbol = '*';

    // Call Functions.
    printNewArrayFun(brand, symbol);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Replace all Vowels Program (Version 2) ..\n\n");
}

// Receive brand from user - Function.
void ReceiveBrandFun(char bra[25])
{
    printf("Please enter a brand: ");
    scanf("%s", bra);
}

// Replace Characters - Function.
void replaceCharactersFun(char bra[25], char sym)
{
    ReceiveBrandFun(bra);

    for (int i = 0; i < strlen(bra); i++)
    {
        if (bra[i] == 'A' || bra[i] == 'a' || bra[i] == 'E' || bra[i] == 'e' || bra[i] == 'I' || bra[i] == 'i' || bra[i] == 'O' || bra[i] == 'o' || bra[i] == 'U' || bra[i] == 'u')
        {
            bra[i] = sym;
        }
    }
}

// Print new array - Function.
void printNewArrayFun(char bra[25], char sym)
{
    replaceCharactersFun(bra, sym);

    printf("\nBrands after replacing vowels: %s\n", bra);
}
//* End Function ..
