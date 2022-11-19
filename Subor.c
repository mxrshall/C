#include <stdio.h>
#define MAX 100

int main(void){

FILE *f_output;
int cislo = 4;
float mat[MAX][MAX];
int i, j;

for (i=0;i<2;i++){
    for (j=0;j<2;j++){
        printf("Zadaj prvok matice [%d][%d]\n",i,j);
        scanf("%f",&mat[i][j]);
    }
}

f_output = fopen("file.txt", "w");

fputs("Ahoj\n", f_output);
fprintf(f_output, "Tvoje cislo %d\n", cislo);

fprintf(f_output, "Toto je tvoja matica.\n");
for (i=0;i<2;i++){
    for (j=0;j<2;j++){
        fprintf(f_output, "%f\t", mat[i][j]);    
    }
    printf("\n");
}

fclose(f_output);

FILE *f_input;

f_input = fopen("file.txt", "r");

for(i=0;i<=10;i++){
  fscanf(f_input, "%d", &i);
  printf("%d", i); 
}

fclose(f_input);

    return 0;
}