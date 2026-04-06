#include <stdio.h>

int main() {

    int numero = 2;
    int *ptr_numero = &numero;
    ptr_numero = 0;

    printf(" %p \n", ptr_numero);

    return 0;
}