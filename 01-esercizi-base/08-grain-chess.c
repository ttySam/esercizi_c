#include <stdio.h>
#include <math.h>

/*Calculate the number of grains of wheat on a chessboard.

A chessboard has 64 squares. Square 1 has one grain, square 2 has two grains, square 3 has four grains, and so on, doubling each time.

Write code that calculates:

the number of grains on a given square
the total number of grains on the chessboard
*/

#define SQUARES 64

int grainCount(int square){
    int counter = 0;
    int grain;
    if (square < 0 || square > 64) {
        printf("%d non è un numero valido\n", square);
        return 0;
    }
    grain = pow(2, square - 1);
    return grain;
}


int main(){
    int quadrato;
    unsigned long int totaleMais;
    printf("Di quale quadrato vuoi conoscere la quantità di chicchi di mais? ");
    scanf("%d", &quadrato);
    printf("Ci sono %d chicchi di mais nel quadrato numero %d\n",grainCount(quadrato), quadrato);

    for(int i = 1; i < 65; i++){
        totaleMais+=grainCount(i);
    }
    printf("Il totale dei chicchi di mais è %lu\n", totaleMais);
    
    return 0;
}