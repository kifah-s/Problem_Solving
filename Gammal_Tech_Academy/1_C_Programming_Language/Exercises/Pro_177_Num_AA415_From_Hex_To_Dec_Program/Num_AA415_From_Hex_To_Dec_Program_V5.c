

/* >>> Num AA415 From Hex To Dec Program ( Version 5 ) <<< */

/* >>> Convert number (AA415) from hexadecimal to decimal. <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>

void welcomeMassageFun();
int hexadecimal_to_decimal(char *hex);

int main()
{
    welcomeMassageFun();
    
    // Print the hexadecimal and decimal numbers
    printf("AA415 in hexadecimal = %d in decimal\n\n\n", hexadecimal_to_decimal("AA415"));

    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Num AA415 From Hex To Dec Program ( Version 5 ) ..\n\n");
}

// A function that converts a hexadecimal number to a decimal number
int hexadecimal_to_decimal(char *hex)
{
    // Initialize the decimal number and the length of the hexadecimal number
    int decimal = 0, length = strlen(hex);

    // Loop from the end of the hexadecimal number to the beginning
    for (int i = length - 1; i >= 0; i--)
    {
        // Get the current hexadecimal digit
        char digit = hex[i];

        // Convert the digit to a decimal value
        int value;
        if (digit >= '0' && digit <= '9')
        {
            value = digit - '0';
        }
        else if (digit >= 'A' && digit <= 'F')
        {
            value = digit - 'A' + 10;
        }
        else if (digit >= 'a' && digit <= 'f')
        {
            value = digit - 'a' + 10;
        }
        else
        {
            // Invalid hexadecimal digit
            return -1;
        }

        // Add the value multiplied by the power of 16 to the decimal number
        decimal += value * pow(16, length - i - 1);
    }

    // Return the decimal number
    return decimal;
}