#include<stdio.h>

int max(int num1, int num2){
    if(num1>num2){
        return num1;
    }else
        return num2;
}

int main(){

int num1, num2;

printf("Zadaj dve cisla: ");
scanf("%d %d", &num1, &num2);

int vysledok = max(num1, num2);
printf("Vysledok %d", vysledok);

    return 0;
}