#include<stdio.h>

int porovnavanie(int cislo){
    if(cislo>=1 && cislo<=10){
        return cislo;
    }else{
        return 0;
    }
}

int main(void){

int cislo, interval=0;

while (1){
    printf("Zadaj cislo: ");
    scanf("%d", &cislo);

    if(cislo==0){
        goto end;
    }

    int vysledok = porovnavanie(cislo);

    if(vysledok==cislo){
        interval++;
    }

    printf("Ak chcete vypis ukoncit zadajte 0.\n");
}

end:
printf("Do intervalu patri: %d", interval);

    return 0;
}