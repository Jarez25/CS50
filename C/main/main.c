#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string s = get_string("Ingrese su nombre: ");
    printf("�Hola, %s!\n", s);
    return 0;
}
