

/* >>> Num AA415 From Hex To Dec Program ( Version 2 ) <<< */

/* >>> Convert number (AA415) from hexadecimal to decimal. <<< */

#include <stdio.h>

int hex_to_dec();

int main()
{
    printf("\n\nYou welcome in Num AA415 From Hex To Dec Program ( Version 2 ) ..\n\n");

    hex_to_dec();

    return 0;
}

// Functions ..
// hex to dec function;
int hex_to_dec()
{
    int num = 0XAA415;

    printf("Hexadecimal number : %X\n\n", num);
    printf("Decimal number : %d\n\n\n", num);

    return 0;
}