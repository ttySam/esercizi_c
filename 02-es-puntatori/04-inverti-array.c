#include <stdio.h>
#include <stdlib.h> // importo <stdlib.h> per usare la funzione 'sizeof()'

// Scrivi una funzione che riceva un array e lo inverta **sul posto** (senza crearne uno nuovo e senza return).


// Creo una funzione che prende come parametri un array, la sua dimensione e non restituisce niente
void invertiArray(int lista[], int size){
    int i, j;   // inizializzo 2 variabili da usare come contatori
    int lista2[size]; // Creo una seconda lista della stessa grandezza di quella originale

    /* 
        Creo un ciclo for:

        'i' prende lo stesso valore di (size -1), così da selezionare il valore nell'ultimo indice dell'array originale

        A 'j' assegno zero per usarlo come indice di partenza per il secondo array

        Finché 'j' è minore della grandezza dell'array incremento 'j' e decremento 'i'

    */
    for (i = (size - 1), j = 0; j < size; i--, j++) {
        lista2[j] = lista[i]; // assegno a lista2 i valori di lista, inserendoli al contrario
    }

    /* 
        dereferenzio gli array (che sono di base dei puntatori), e quindi assegno all'indirizzo di memoria di 'lista'
        l'indirizzo di memoria di 'lista2' 
    */
    *lista = *lista2; // -> se fossero variabili normali, e non array, farei così -> '&variabile = &variabile2'
}

// Funzione main che restituisce un intero ('return 0') e non prende nessun paramentro ('void')
int main(void){
    // creo una lista
    int lista[] = {3, 5, 7, 9, 9, 6, 4};

    /* Creo una variabile 'size' per ricavarmi la grandezza dell'array:

        Uso la funzione 'sizeof()' che mi restituisce la grandezza in bit di un oggetto

        Siccome gli elementi all'interno di un array hanno tutti la stessa grandezza in bit:

        Divido la dimensione dell'array per il primo elemento al suo interno 
    */
    int size = sizeof(lista) / sizeof(lista[0]);
    
    // Creo un ciclo for per stampare i valori dell'array prima di invertirlo
    for (int i = 0; i < size; i++){
        printf("%d\n", lista[i]);
    }

    // chiamo la funzione per invertire l'array
    invertiArray(lista, size);
    // stampo uno spazio per dividere i risultati
    printf("\n");

    // creo un ciclo for per stampare i valori dell'array dopo averlo invertito
    for (int i = 0; i < size; i++){
        printf("%d\n", lista[i]);
    }
    

    return 0;
}
