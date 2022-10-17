#include<stdio.h>

int main(void){

int i, cisla[3];

printf("Zadaj 3 cisla: \n");

for(i=0;i<3;i++){
    scanf("%d", &cisla[i]);
}

for(i=0;i<3;i++){
    printf("%d", cisla[i]);
}

return 0;
}