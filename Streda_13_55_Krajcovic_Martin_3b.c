#include <stdio.h>

int main(void){

char hodnotenie;

printf("Zadaj znak pre hodnotenie A,B,C,D,E alebo X: ");
scanf("%s", &hodnotenie);

switch(hodnotenie){
    case 'A': printf("vyborne"); break;
    case 'B': printf("velmi dobre"); break;
    case 'C': printf("dobre"); break;
    case 'D': printf("uspokojivo"); break;
    case 'E': printf("vyhovel"); break;
    case 'X': printf("nevyhovel"); break;
    default: printf("Zadal si spatny znak.");
}

    return 0;
}

