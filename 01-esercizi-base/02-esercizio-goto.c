#include <stdio.h>

// funzione che ripete la lettera c
int repeatC(){
    int i=0;

    loop:
    if (i>20) goto esci;
    printf("%c \n", 'c');
    i++;
    goto loop;
    esci:
    return 0;
}


int main() {
    repeatC();
    return 0;
}