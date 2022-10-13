#include<stdio.h>

int main(void){

int a, b, i;
int vysledok2=0;
int vysledok3=0;

printf("Zadaj cislo: ");
scanf("%d %d", &a, &b);

if(a<b){
    for(i=a; i<=b; i++){
        if(i%2==0){
            vysledok2++;
        }else if(i%3==0){
            vysledok3++;
        }else continue;
    }
}else if(a>b){
    for(i=b; i<=a; i++){
        if(i%2==0){
            vysledok2++;
        }else if(i%3==0){
            vysledok3++;
        }else continue;
    }
}

printf("%d", vysledok2);
printf("%d", vysledok3);

    return 0;
}