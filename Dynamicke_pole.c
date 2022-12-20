#include <stdio.h>
#include <stdlib.h>

int main(){

int i, j, cislo, riadok, stlpec;
int **pole;

printf("Riadok: ");
scanf("%d", &riadok);
printf("Stlpec: ");
scanf("%d", &stlpec);

pole = (int**)malloc(riadok * sizeof(int*));

for(int i=0;i<riadok;i++){
    pole[i] = (int*)malloc(stlpec * sizeof(int));
}

for(i=0;i<riadok;i++){
    for(j=0;j<stlpec;j++){
        printf("Zadaj cislo: ");
        scanf("%d", &cislo);
        pole[i][j]=cislo;
    }
}

for(i=0;i<riadok;i++){
    for(j=0;j<stlpec;j++){
        printf("%d", pole[i][j]);
        printf("\t");
    }
    printf("\n");
}

for(i=0;i<riadok;i++){
    free(pole[i]);
}

free(pole);

  return 0;
}
