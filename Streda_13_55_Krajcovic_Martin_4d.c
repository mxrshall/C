#include <stdio.h>

void vypocet(int n);

int main(void){

int n;

printf("Zadaj lubovolny n-ty clen: ");
scanf("%d", &n);
vypocet(n);

    return 0;
}

void vypocet(int n){
    int i, vysledok=1;

    for(i=1;i<=20;i++){
        vysledok=i*n;
        printf("%d\n", vysledok);
    }
}
