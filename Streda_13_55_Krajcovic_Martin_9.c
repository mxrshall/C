#include<stdio.h>

int main(void){

int a, b, i;
int vysledok2=0;
int vysledok3=0;

printf("Zadaj cislo: ");
scanf("%d %d", &a, &b);

for(i=a; i<=b; i++){
    if(i%2==0){
       vysledok2++;
    }else if(i%3==0){
       vysledok3++;
       printf("%d", i);
    }else continue;
    
}

printf("%d", vysledok2);
printf("%d", vysledok3);

    return 0;
}