

/* >>> Daily Planning Program ( Version 5 ) <<<*/

/* >>> Daily Planning Program : In order to make the most of your day, you need to prepare the tasks you need to do and write them from the day before..
Required : Write a program that prints out the tasks you have to do tomorrow. <<< */

#include <stdio.h>

void welcome_massage(char welcome[]);
void daily_program(char program[], char university[], char english[], char programming[], char gym[], char private[], char sleeping[], char dreams[]);

int main()
{
    char welcome[] = {"\n\nYou welcome in Daily Planning Program ( Version 5 ) ..\n\n"};
    welcome_massage(welcome);

    char program[] = {"My daily program is : \n"};
    char university[] = {"1 - University study from 5 am to 7 am.\n"};
    char english[] = {"2 - English study from 7 am to 9 am.\n"};
    char programming[] = {"3 - study and work in program from 9 am to 5 pm.\n"};
    char gym[] = {"4 - go to the gym from 5 pm to 7 pm.\n"};
    char private[] = {"5 - this is my private time from 7 pm to 10 pm.\n"};
    char sleeping[] = {"6 - this is sleeping time 10 pm.\n"};
    char dreams[] = {"and happy dreams\n\n\n"};

    daily_program(program, university, english, programming, gym, private, sleeping, dreams);

    return 0;
}

// Functions ..

// Welcome massage function;
void welcome_massage(char welcome[])
{
    printf("%s", welcome);
}

// Daily program function;
void daily_program(char program[], char university[], char english[], char programming[], char gym[], char private[], char sleeping[], char dreams[])
{
    printf("%s", program);
    printf("%s", university);
    printf("%s", english);
    printf("%s", programming);
    printf("%s", gym);
    printf("%s", private);
    printf("%s", sleeping);
    printf("%s", dreams);
}