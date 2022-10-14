#include<stdio.h>

int main(void){

int a, b, x;
int vysledok2=0, vysledok3=0;

while (1){
    printf("Zadaj cislo: ");
    scanf("%d %d", &a, &b);

    if(a==0 || b==0){
        goto end;
    }

    if(a>b){
        x=a;
        a=b;
        b=x;
    }

    if(a<b){
        for(a; a<=b; a++){
            if(a%2==0){
                vysledok2++;
            }
            if(a%3==0){
                vysledok3++;
            }
        }
    }
    printf("V postupnosti sa nachadza %d cisel delitelnych dvojkou.\n", vysledok2);
    printf("V postupnosti sa nachadza %d cisel delitelnych trojkou.\n", vysledok3);

    vysledok2=0;
    vysledok3=0;
}

    end: //goto end;
    return 0;
}