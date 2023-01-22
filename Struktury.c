#include<stdio.h>

struct Clovek{
int vyska;
char meno[50];
int vek;
}clovek;

int main(){

printf("Zadaj tvoju vysku: ");
scanf("%d", &clovek.vyska);
fflush(stdin);

printf("Zadaj tvoje meno: ");
gets(clovek.meno);
fflush(stdin);

printf("Zadaj tvoj vek: ");
scanf("%d", &clovek.vek);

printf("Tvoja vyska: %d\n", clovek.vyska);
printf("Tvoje meno: %s\n", clovek.meno);
printf("Tvoj vek: %d", clovek.vek);

    return 0;
}