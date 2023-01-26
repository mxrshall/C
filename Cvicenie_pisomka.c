#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

char *s;

printf("Zadaj text: ");
gets(s);
int dlzka = strlen(s);
s=(char*)malloc(dlzka*sizeof(char));

    return 0;
}
