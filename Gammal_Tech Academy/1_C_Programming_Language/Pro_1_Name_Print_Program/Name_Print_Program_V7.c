

/* >>> Name Print Program ( Version 7 ) <<< */

/* >>> A program that prints your name on the screen <<< */

#include <stdio.h>

char *welcome_message(char message[]);
char *name_function(char name[]);

int main()
{
    printf(welcome_message("\n\nYou welcome in Name Print Program ( Version 7 ) ..\n\n"));

    printf("My name is %s\n\n\n", name_function("kifah saloum"));

    return 0;
}

// Functions ..

// Welcome message function;
char *welcome_message(char message[])
{
    /* printf("%s", message); */
    return message;
}

char *name_function(char name[])
{
    /* printf("My name is %s\n\n\n", name); */
    return name;
}