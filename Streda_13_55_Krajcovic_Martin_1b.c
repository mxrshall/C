#include <stdio.h>

int main(void){

float cislo1, cislo2;
while(cislo1!=0 || cislo2!=0){

    do{
        printf("Ak zadas 0 tak sa vkladanie ukonci.\n");
        printf("Zadaj prve cislo: ");
        scanf("%f", &cislo1);
        printf("Zadaj druhe cislo: ");
        scanf("%f", &cislo2);  
    }while(cislo1==0 || cislo2==0);

    do{
        if(cislo1>cislo2){
            printf("Vysledok: %f > %f\n", cislo1, cislo2);
        }

        if(cislo1<cislo2){
            printf("Vysledok: %f < %f\n", cislo1, cislo2);
        }

        if(cislo1==cislo2){
            printf("Vysledok: %f = %f\n", cislo1, cislo2);
        }
    }while(cislo1==0 || cislo2==0);

}
    
    return 0;
}

