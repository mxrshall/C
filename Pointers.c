#include <stdio.h>

int main(void){

int x = 4;
int *pX = &x;
int y = *pX;

printf("%d", y);

    return 0;
}