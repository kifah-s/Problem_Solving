

/* >>> Favorite Food Program ( Version 5 ) <<< */

/* >>> Favorite Food Program : Even if you eat different types of food, you must have favorite foods..
Required : Write a program that prints 3 of your favorite eaters. <<< */

#include <stdio.h>

void welcome_massage(char massage[]);
void favorite(char fav_food[]);

int main()
{
    char massage[] = {"\n\nYou welcome in Favorite Food Program ( Version 5 ) ..\n\n"};
    welcome_massage(massage);

    char fav_food[] = {"My Favorite food is : \n"};
    char protein[] = {"- Food that contains protein\n"};
    char authority[] = {"- Authority\n"};
    char pasta[] = {"- The pasta\n\n\n"};
    favorite(fav_food);
    favorite(protein);
    favorite(authority);
    favorite(pasta);

    return 0;
}

// Function ..
// Welcome massage function;
void welcome_massage(char massage[])
{
    printf("%s", massage);
}

// Favorite function;
void favorite(char fav_food[])
{
    printf("%s", fav_food);
}