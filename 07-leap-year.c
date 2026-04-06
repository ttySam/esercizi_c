#include <stdio.h>
#include <stdlib.h>

int leap_year(int year){
    if(year % 4 ==0 && year % 400 == 0){
        return 1;
    }
    else return 0;
}

int main(){
    int year;
    printf("Inserisci un anno: ");
    scanf("%d", &year);

    if (leap_year(year) == 1) {
        printf("%d è un anno bisestile\n", year);
    }
    else printf("%d non è un anno bisestile\n", year);
    return 0;
    
}