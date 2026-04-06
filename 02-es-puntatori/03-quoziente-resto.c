#include <stdio.h>

// Scrivi una funzione `dividi(int a, int b, int *quoziente, int *resto)` che calcoli entrambi i risultati della divisione in una sola chiamata.

struct QuozienteResto{
    float quoziente;
    int resto;
};

struct QuozienteResto dividi(float *a, float *b){

    int divisione = *a / *b;
    int resto = (int)*a % (int)*b;

    struct QuozienteResto qr;
    qr.quoziente = divisione;
    qr.resto = resto;
    return qr;
}

int main(void){
    float a = 8;
    float b = 4;

    // Passo l'indirizzo di memoria
    // dividi(&a, &b);

    // Stampo quoziente e resto
    printf("%.f diviso %.f:\n quoziente -> %.f resto -> %d\n", a, b, dividi(&a, &b).quoziente, dividi(&a, &b).resto);

    return 0;
}