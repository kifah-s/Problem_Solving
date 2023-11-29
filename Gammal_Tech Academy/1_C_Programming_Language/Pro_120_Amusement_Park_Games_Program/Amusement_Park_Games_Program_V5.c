

/* >>> Amusement Park Games Program ( Version 5 ) <<< */

/* >>> At the club there are some games that are dangerous to some people's ages. If this person is younger than 10 years or older than 50 years, he or she is prohibited from entering.
Required : Make a program that asks a person to enter a number expressing his age, if he is older than 50 or less than 10 prints the word "not allowed". <<< */

#include <stdio.h>

void welcomeMassageFun();
int getAgeFun();
int gameDangerFun(int age);
int haveFunFunction(int age);

int main()
{
    welcomeMassageFun();

    int age = getAgeFun();
    gameDangerFun(age);
    haveFunFunction(age);
    
    return 0;
}

// Function;
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Amusement Park Games Program ( Version 5 ) .. \n\n");
}

// Get Age Function;
int getAgeFun()
{
    int age;
    printf("Please enter your age before playing this game : ");
    scanf("%d", &age);
    return age;
}

// Game Danger Function;
int gameDangerFun(int age)
{
    if (age < 10 || age > 50)
    {
        printf("\nWarning : this game Danger in the rate of your age\n\n\n");
    }
}

// Have fun function;
int haveFunFunction(int age)
{
    if (age > 10 && age < 50)
    {
        printf("\nHave fun in the game\n\n\n");
    }
}