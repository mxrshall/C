#include<stdio.h>

void porovnavanie1(int a, int b);
void porovnavanie2(int b, int c);
void porovnavanie3(int a, int c);

int main(){

int a, b, c;

printf("Zadaj 3 cisla: ");
scanf("%d %d %d", &a, &b, &c);

porovnavanie1(a, b);
porovnavanie2(b, c);
porovnavanie3(a, c);
    return 0;
}

void porovnavanie1(int a, int b){
    if(a<b){
        printf("A je mensie ako B");
    }
    if(a>b){
        printf("A je vacsie ako B");
    }
    if(a==b){
        printf("cisla sa rovnaju");
    }
}

void porovnavanie2(int b, int c){
    if(b<c){
        printf("B je mensie ako C");
    }
    if(b>c){
        printf("B je vacsie ako C");
    }
    if(b==c){
        printf("cisla sa rovnaju");
    }
}

void porovnavanie3(int a, int c){
    if(a<c){
        printf("A je mensie ako C");
    }
    if(a>c){
        printf("A je vacsie ako C");
    }
    if(a==c){
        printf("cisla sa rovnaju");
    }
}