#include <stdio.h>

// funzione che stampa caratteri ascii fino alla z minuscola

int printAscii(int lettera){
    if (lettera >= 'z' + 1) return 0;

    printf("%c : %d\n", lettera, lettera);
    printAscii(lettera +1);
    return 0;
}

int main() {

    printAscii('A');
    // printf("%d \n", 'z');
    return 0;
}