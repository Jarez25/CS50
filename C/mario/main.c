#include <stdio.h>
#include <stdlib.h>
#include "cs50.h"

//coemtario

int main()
{
    const int n =  get_int("numero \n");

//inprime bloques

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("#");
        }
    printf("\n");
    }
}
