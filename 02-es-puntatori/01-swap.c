#include <stdio.h>

//Scrivi una funzione `swap(int *a, int *b)` che scambi i valori di due variabili intere. Verificala scambiando due numeri nel main.

void swap(int *a, int *b){

    int c = 0;

    c = *a;
    *a = *b;
    *b = c;
}

int main(void){
    int a = 7;
    int b = 2;
    printf("Ora a vale: %d e b vale : %d\n", a, b);

    int *ptr_a = &a;
    int *ptr_b = &b;
    // swap(ptr_a, ptr_b);
    swap(&a, &b);
    printf("Dopo a vale: %d e b vale : %d\n", a, b);

    return 0;
}