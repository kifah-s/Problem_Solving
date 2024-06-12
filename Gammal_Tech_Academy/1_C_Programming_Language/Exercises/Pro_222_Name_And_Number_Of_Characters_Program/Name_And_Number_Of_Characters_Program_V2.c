

/* >>> Name And Number Of Characters Program ( Version 2 ) <<< */

/* >>> A program that asks the user to enter his name, and prints the name along with the number of letters of the name. <<< */

#include <stdio.h>
#include <string.h>

void welcomeMassageFun();
int name_and_number_of_characters();

int main()
{
    welcomeMassageFun();
    name_and_number_of_characters();

    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Name And Number Of Characters Program ( Version 2 ) ..\n\n");
}

// name and number of characters function;
int name_and_number_of_characters()
{
    // Declaration arrays of characters;
    char name[25];

    // Receive values from the user;
    printf("Please enter your first name : ");
    scanf("%s", name);

    // Printing name and number of characters;
    printf("\nYour name : %s\nNumber of characters : %d", name, strlen(name));

    printf("\n\n\n");
}