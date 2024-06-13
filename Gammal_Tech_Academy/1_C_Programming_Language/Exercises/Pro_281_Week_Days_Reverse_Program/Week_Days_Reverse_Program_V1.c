

/* >>> Week Days Reverse Program ( Version 1 ) <<< */

/* >>> The program arranges weekdays vice versa (means Friday Day remains 1 and Saturday Day remains 7) and prints them as numbers. <<< */

#include <stdio.h>
#include <string.h>

int main()
{
    printf("\n\nYou welcome in Week Days Reverse Program ( Version 1 ) ..\n\n");

    enum week
    {
        fri,
        thu,
        wed,
        tue,
        mon,
        sun,
        sat
    };

    for (int i = sat; i >= fri; i--)
    {
        printf("\n%d", i);
    }
    printf("\n\n");

    return 0;
}