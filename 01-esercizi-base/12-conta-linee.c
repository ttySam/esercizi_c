#include <stdio.h>

// Conta i caratteri in input
int main(){
    int c, nl;
    nl = 0;
    while ((c = getchar()) != EOF) {
        if (c == "\n") {
            c++;
        }
        printf("%d\n", nl);
    }
    
}