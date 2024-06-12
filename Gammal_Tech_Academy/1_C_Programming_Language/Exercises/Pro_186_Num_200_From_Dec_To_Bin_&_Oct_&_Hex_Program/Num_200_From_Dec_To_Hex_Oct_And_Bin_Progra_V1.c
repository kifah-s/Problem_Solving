

/* >>> Num 200 From Dec To Hex, Oct And Bin Program ( Version 1 ) <<< */

/* >>> Convert Number (200) from decimal to hexadecimal, octal and binary. <<< */

#include <stdio.h>

int dec_to_hex(int n);
int dec_to_oct(int n);
int dec_to_bin(int n);

int main()
{
    printf("\n\nYou welcome in Num 200 From Dec To Hex, Oct And Bin Program ( Version 1 ) ..\n\n");

    int num = 200;
    printf("The decimal number is : %d", num);

    dec_to_hex(num);
    dec_to_oct(num);
    dec_to_bin(num);

    printf("\n\n\n");

    return 0;
}

// Functions ..
// Function for convert decimal to hexadecimal ..
int dec_to_hex(int n)
{
    printf("\n\nThe hexadecimal number is : %X", n);
}

// Function for convert decimal to octal ..
int dec_to_oct(int n)
{
    printf("\n\nThe octal number is : %o", n);
}

// Function for convert decimal to binary ..
int dec_to_bin(int n)
{
    int binary[32], i = 0;

    while (n > 0)
    {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }
    printf("\n\nThe binary number is : ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", binary[j]);
    }
}
