#include <stdio.h>

int main(void){

FILE *f_output;
int cislo = 4, i;

f_output = fopen("file.txt", "w");

fputs("Ahoj\n", f_output);
fprintf(f_output, "Tvoje cislo %d\n", cislo);

for(i=0;i<=10;i++){
  fprintf(f_output, "Tvoje cislo %d\n", i);  
}
fclose(f_output);

FILE *f_input;

f_input = fopen("file.txt", "r");

fscanf(f_input, "%d", &i);
printf("%d", i);

fclose(f_input);

    return 0;
}