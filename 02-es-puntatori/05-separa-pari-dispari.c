#include <stdio.h>
#include <stdlib.h>

/* 
    Definisco una macro per ricavarmi la dimensione di un array, siccome non posso creare una funzione apposta
    Infatti dato che gli array vengono passati come puntatori ad una funzione, sizeof() mi restituisce la grandezza
    del puntatore

*/
#define sizeofArray(array) (sizeof(array)/sizeof(array[0]))
// Scrivi una funzione che riceva un array e restituisca tramite puntatori quanti elementi sono pari e quanti sono dispari.

/*Funzione che prende come parametri una array, un intero e due puntatori a intero'*/
void restituisciPari(int lista[], int size, int *pari, int *dispari){

    for (int i = 0; i < size; i++) {

        // Se l'elemento è pari, incremento la variabile 'pari'
        if (lista[i] % 2 == 0) (*pari)++; // NB. va scritta tra parentesi. se scrivo *pari++ incremento il puntatore

        // sennò incremento 'dispari'
        else (*dispari)++;
    }

}

int main(void){
    // Dichiaro due variabili da usare come contatori
    int pari, dispari;
    pari = dispari = 0; // e assegno ad entrambe il valore di 0

    // Creo array di interi
    int array[] = {10, 3, 5, 654, 540, 33, 29};

    // chiamo la funzione per il conteggio dei numeri pari e dispari
    restituisciPari(array, sizeofArray(array), &pari, &dispari);

    printf("Pari: %d, Dispari: %d\n", pari, dispari);

    return 0;
}