#include <stdio.h>
#include "cs50.h"

int main(void)
{
    char c = get_char("Do you agree (y/n)? ");

    if (c == 'y' || c == 'Y') {
        printf("Agree.\n");
    } else if (c == 'n' || c == 'N') {
        printf("Not agreed.\n");
    } else if (c == 'c' || c == 'C') {
        printf("Not agreed.\n");
    } else {
        printf("Invalid input.\n");
    }

    return 0;
}
