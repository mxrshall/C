#include<stdio.h>

int main(void){

int cislo, i, vysledok;

printf("Zadaj cislo: ");
scanf("%d", &cislo);

for(i=cislo; i>=0; i--){
    if(i%2==0 || i%3==0){
       printf("%d ", i); 
    }else continue;
    
}

    return 0;
}