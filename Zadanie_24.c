#include <stdio.h>
#include <math.h>
#define MAX 100

int premena(long long cislo);

int main(void){

FILE *f_output;
int mat[MAX][MAX];
long long cislo;
int r, s, i, j; //riadok, stlpec

while(r<1 || s<1){
    printf("Zadaj pocet riadkov: ");
    scanf("%d", &r);
    printf("Zadaj pocet stlpcov: ");
    scanf("%d", &s);
}

for(i=0;i<r;i++){
    for(j=0;j<s;j++){
        printf("Zadaj prvok matice v dvojkovej sustave[%d][%d]\n", i, j);
        scanf("%lld", &cislo);
        mat[i][j]=cislo;
        //mat[i][j]=premena(cislo);
    }
}

f_output = fopen("subor.txt", "w"); //zapis

if(f_output==NULL){
    printf("Chyba pri otvarani.\n");
    return 1;
}

fprintf(f_output, "Toto je tvoja matica v dvojkovej sustave.\n");
for (i=0;i<r;i++){
    for (j=0;j<s;j++){
        fprintf(f_output, "%d\t", mat[i][j]);    
    }
    fprintf(f_output, "\n");
}

fclose(f_output);
    
    return 0;
}

int premena(long long cislo){ //funkcia premena

int des=0, i=0, posledne;

while(cislo!=0){
    posledne=cislo%10;
    cislo=cislo/10;
    des=des+posledne*pow(2, i);
    i++;
}

  return des;
}
