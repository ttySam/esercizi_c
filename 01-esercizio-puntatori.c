#include <stdio.h>




int main(){
    int a = 0;
    int *b = &a;
    int c = 7;
    printf("a: %d b: %p \n", a,b);
    *b = 3;
    c = *b;
    printf("a: %d b: %d c: %d\n", a,*b,c);


    return 0;
}