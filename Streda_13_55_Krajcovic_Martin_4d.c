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
    int i, opakovanie, vysledok;

    for(i=1;i<=20;i++){
        if(n==1){
            printf("%d mocnina z %d je %d\n", n, i, i);
        }else if(n==2){
            vysledok=i*i;
            printf("Vysledok je %d\n", vysledok);
        }else{
            vysledok=i*i;
            for(opakovanie=3;opakovanie<=n;opakovanie++){
                vysledok=vysledok*i;
            }
            printf("Vysledok je %d\n", vysledok);
            vysledok=0;
        }
        
    }
}
