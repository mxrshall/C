#include <stdio.h>
#include <string.h>

int main(void){

char meno[10];
char meno2[10]="Matej";
char meno3[10];
int cislo, n, vysledok=0, i=0;

printf("Zadaj svoje meno: ");
gets(meno);

printf("Tvoje meno je %s", meno);

for(i=0;i<strlen(meno);i++){
    printf("%c", meno[i]);
}

strcpy(meno, meno2);
printf("Tvoje meno: %s", meno);

    return 0;
}

