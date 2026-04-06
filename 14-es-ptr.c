#include <stdio.h>

// Scrivi una funzione che riceva un array e restituisca tramite puntatori sia il valore minimo che il massimo in una sola chiamata.


// Inizializzo una struttura
struct MinMax{
    int a, b;
};

// faccio una funzione che restituisce minimo e massimo all'interno della struttura

struct MinMax ret_min_max(int array[], int size){ // la struttura prende come parametri un array e una dimensione
    // Inizializzo le variabili min e max al primo elemento dell'array
    int min = array[0];
    int max = array[0];


    // Iteriamo attraverso l'array
    for (int i = 1; i < size; i++){

        // Sostituiamo a min il valore minore
        if (array[i] < min) {
            min = array[i];
        }

        // Sostituiamo a max il valore maggiore
        if (array[i] > max) {
            max = array[i];
        }

    }
    // Struttura da restituire
    struct MinMax mm;
    mm.a = min; // primo elemento della struttura
    mm.b = max; // secondo elemento della struttura

    return mm;
}


int main(void){
    // Creo un array di 5 numeri
    int lista[5]= {6,7,5,3,0};

    /*Assegno a size la dimensione dividendo la dimensione dell'intero array
    per la dimensione di un singolo elemento al suo interno*/
    int size = sizeof(lista) / sizeof(lista[0]);

    // Stampo entrambi gli elementi della struttura all'interno della funzione
    printf("%d %d \n",ret_min_max(lista, size).a, ret_min_max(lista, size).b);

    return 0;
}