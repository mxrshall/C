#include<stdio.h>

int main(void){

float peniaze, x, kofola=1;

printf("Zadaj kolko mas penazi: ");
scanf("%f", &peniaze);

if(peniaze>=kofola){
    x=peniaze-kofola;
    printf("Mozes si kupit kofolu. Zostane ti %f.\n", x);
}else if(peniaze<kofola){
    x=kofola-peniaze;
    printf("Na kofolu nemas. Chyba ti %f.\n", x);
}

    return 0;
}