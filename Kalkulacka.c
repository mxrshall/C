#include<stdio.h>

int main(void){

float num1 ,num2;
char znak;

do{
    printf("Zadaj prve cislo: ");
    scanf("%f", &num1);
}while(num1<=0);

do{
    printf("Zadaj druhe cislo: ");
    scanf("%f", &num2);
}while(num2<=0);

do{
    printf("Zadaj znak: ");
    scanf("%s", znak);
}while(znak!='+' || znak!='-' || znak!='*' || znak!='/');

if(znak=='+'){
    printf("Vysledok je: %f", num1 + num2);
}else if(znak=='-'){
    printf("Vysledok je: %f", num1 - num2);
}else if(znak=='*'){
    printf("Vysledok je: %f", num1 * num2);
}else if(znak=='/'){
    printf("Vysledok je: %f", num1 / num2);
}




return 0;
}