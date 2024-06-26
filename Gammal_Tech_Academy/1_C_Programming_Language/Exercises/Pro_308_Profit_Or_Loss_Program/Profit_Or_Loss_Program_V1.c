

/* >>> Profit Or Loss Program ( Version 1 ) <<< */

/* >>> A program that requires a person to enter two numbers, the first expresses the value of the initial money and the second expresses the total money after a month and calculates the value of the difference and if the profit prints "profit =.... "And if the loss prints" loss =...... "(using the boolean). <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void welcomeMassageFun();
bool profitOrLossFun(int currentMoney, int moneyAfterMonth);

int main()
{
    welcomeMassageFun();

    int currentMoney = 0, moneyAfterMonth = 0;
    printf("Please enter current money : ");
    scanf("%d", &currentMoney);

    printf("Please enter money after month : ");
    scanf("%d", &moneyAfterMonth);

    if (profitOrLossFun(currentMoney, moneyAfterMonth) == true)
    {
        printf("\nProfit ...\n\n");
    }
    else
    {
        printf("\nLoss ...\n\n");
    }

    return 0;
}

// Functions ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Profit Or Loss Program ( Version 1 ) ..\n\n");
}

// Profit or loss function;
bool profitOrLossFun(int currentMoney, int moneyAfterMonth)
{
    int difference = moneyAfterMonth - currentMoney;
    
    if (difference > 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}