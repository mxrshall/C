#include <stdio.h>
#include <string.h>
#define MAX 100

char pole(char s1[MAX], char s2[MAX]);

int main(void){

char s1[MAX], s2[MAX];

printf("Zadaj text do prveho textoveho retazca: ");
gets(s1);
printf("Zadaj text do druheho textoveho retazca: ");
gets(s2);

printf("Vypis pomocou pola.\n");
pole(s1, s2);

printf("\n");

printf("Vypis pomocou strcat.\n");
char *ptr = strcat(strcat(s1, " "), s2);
printf("%s", ptr);

    return 0;
}

char pole(char s1[MAX], char s2[MAX]){
int i;

    for (i=0;i<=strlen(s1); i++){
        printf("%c", s1[i]);
    }

    for (i=0;i<=strlen(s2); i++){
        printf("%c", s2[i]);
    }
}
