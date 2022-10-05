#include<stdio.h>

int main(void){

float num1 ,num2, vysledok;
char znak;

printf("Zadaj prve cislo: ");
scanf("%f", &num1);
fflush(stdin);

while(num1==0){
    printf("Zadaj prve cislo: ");
    scanf("%f", &num1);
    fflush(stdin);
}

printf("Zadaj znak: ");
scanf("%c", &znak);
fflush(stdin);

while(znak!='+' && znak!='-' && znak!='*' && znak!='/'){
    printf("Zadaj znak: ");
    scanf("%c", &znak);
    fflush(stdin);
}

printf("Zadaj druhe cislo: ");
scanf("%f", &num2);

while(num2==0){
    printf("Zadaj druhe cislo: ");
    scanf("%f", &num2);
}

switch(znak){
    case '+':
    vysledok=num1+num2;
    break;
    case '-':
    vysledok=num1-num2;
    break;
    case '*':
    vysledok=num1*num2;
    break;
    case '/':
    vysledok=num1/num2;
    break;
}

printf("Vysledok je: %f", vysledok);

return 0;
}