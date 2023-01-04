#include <stdio.h>
#include <string.h>
#define MAX 50

void funkcia(char *ptr);

int main(){

char text[MAX];

printf("Zadaj text: ");
gets(text);

char *ptr = text;

printf("Text na zaciatku: %s\n", ptr);
funkcia(ptr);

    return 0;
}

void funkcia(char *ptr){

for(int i=strlen(ptr);i>=0;i--){
    printf("%c", ptr[i]);
}

}