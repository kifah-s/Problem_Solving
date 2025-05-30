

//* Palindrome and Reverse Program (Version 2).

/*
 * Write a program to check if a given number is a palindrome and find its reverse.
 */

/*
! Input:
! Please enter a Number: 323

! Output:
! Reverse: 323
! Palindrome.
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void printResultFun(int num, int revNum);

int main()
{
    // Declare Variables.
    int myNumber = 0, reverseNumber = 0;

    // Call Functions.
    printResultFun(myNumber, reverseNumber);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Palindrome and Reverse Program (Version 2) ..\n\n");
}

// Receive Number - Function.
int receiveNumberFun(int num)
{
    printf("Please enter a number: ");
    scanf("%d", &num);

    return num;
}

// Reverse Number - Function.
int reverseNumberFun(int num, int revNum)
{
    int dig = 0, tempNum = num;

    while (tempNum)
    {
        dig = tempNum % 10;
        revNum = (revNum * 10) + dig;
        tempNum = tempNum / 10;
    }

    return revNum;
}

// Check Numbers - Function.
void checkNumbersFun(int num, int revNum)
{
    if (num == revNum)
    {
        printf("Palindrome\n\n");
    }
    else
    {
        printf("Not Palindrome\n\n");
    }
}

// Print Result - Function.
void printResultFun(int num, int revNum)
{
    welcomeMessageFun();
    num = receiveNumberFun(num);
    revNum = reverseNumberFun(num, revNum);
    printf("\nReverse: %d\n", revNum);
    checkNumbersFun(num, revNum);
}
//* End Function ..
