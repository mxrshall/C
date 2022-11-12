#include <stdio.h>
#define MAX 100

int main(void){

float mat[MAX][MAX];
int i, j;

for (i=0;i<4;i++){
    for (j=0;j<4;j++){
        printf("Zadaj prvok matice [%d][%d]\n",i,j);
        scanf("%f",&mat[i][j]);
    }
}

printf("Toto je tvoja matica.\n");
for (i=0;i<4;i++){
    for (j=0;j<4;j++){
        printf("%f\t",mat[i][j]);    
    }
    printf("\n");
}
    
    return 0;
}