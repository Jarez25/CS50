#include <stdio.h>
#include "cs50.h"

int main()
{
    int x = get_int("cual es el valor de x? ");
    int y = get_int("cual es el valor de y?");

    if (x < y){
        printf("y es mayor que 5 \n");
    }else if(x > y){
    printf("x es mayor  que y \n");
    }else{
    printf("los dos valores son iguales");
    }

}
