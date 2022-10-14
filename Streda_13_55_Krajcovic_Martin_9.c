#include <stdio.h>

int main(void){

int cislo, delitelne2=0, delitelne3=0;

while (1){
    printf("Zadaj cislo: ");
    scanf("%d", &cislo);

    if(cislo==0){
        goto end;
    }
    if(cislo%2==0){
        printf("Cislo je delitelne 2.\n");
        delitelne2++;
    }
    if(cislo%3==0){
        printf("Cislo je delitelne 3.\n");
        delitelne3++;
    }
    if(cislo%2==1 || cislo%3==1){
        printf("Cislo nieje delitelne 2 ani 3.\n");
    }
    
    printf("Ak chces program ukoncit zadajte 0.\n");

}
    end:
    printf("Cislo je dvojkou delitene %d krat.\n", delitelne2);
    printf("Cislo je trojkou delitene %d krat.\n", delitelne3);
    return 0;
}