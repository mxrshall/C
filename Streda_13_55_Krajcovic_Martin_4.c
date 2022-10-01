#include <stdio.h>

int main(void)
{

float a, b, c;

do{
    printf("Zadaj strany trojuholnika vacsie ako 0:\n");
    scanf("%f" "%f" "%f", &a, &b, &c);
}while(a<=0 || b<=0 || c<=0);
{
    if(a+b>c && b+c>a && a+c>b){
        printf("Trojuholnikova nerovnost plati.\n");
    }else{
        printf("Trojuholnikova nerovnost neplati.\n");
    }
}

return 0;
}
