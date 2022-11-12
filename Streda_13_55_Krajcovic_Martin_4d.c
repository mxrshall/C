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
    float i, opakovanie; 
    double vysledok;

    for(i=1;i<=20;i++){
        if(n==0){
            printf("%d mocnina z %f je 1\n", n, i);
        }else if(n==1){
            printf("%d mocnina z %f je %f\n", n, i, i);
        }else if(n==2){
            vysledok=i*i;
            printf("%d mocnina z %f je %lf\n", n, i, vysledok);
        }else if(n==-1){
            vysledok=1/i;
            printf("%d mocnina z %f je %lf\n", n, i, vysledok);
        }else if(n==-2){
            vysledok=i*i;
            vysledok=1/vysledok;
            printf("%d mocnina z %f je %lf\n", n, i, vysledok);
        }else if(n<-2){
            n=n*-1;
            vysledok=i*i;
            for(opakovanie=3;opakovanie<=n;opakovanie++){
                vysledok=vysledok*i;
            }
            vysledok=1/vysledok;
            printf("%d mocnina z %f je %lf\n", n, i, vysledok);
            vysledok=0;
            n=n*-1;
        }else{
            vysledok=i*i;
            for(opakovanie=3;opakovanie<=n;opakovanie++){
                vysledok=vysledok*i;
            }
            printf("%d mocnina z %f je %lf\n", n, i, vysledok);
            vysledok=0;
        }
        
    }
}
