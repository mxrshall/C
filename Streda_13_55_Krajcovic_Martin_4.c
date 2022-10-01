#include <stdio.h>

int main(void)
{

float a, b, c;

printf("Zadaj strany trojuholnika:");
scanf("%f" "%f" "%f", &a, &b, &c);

if(a+b>c && b+c>a && a+c>b){
    printf("Trojuholnikova nerovnost plati.");
}else{
    printf("Trojuholnikova nerovnost neplati.");
}

return 0;
}
