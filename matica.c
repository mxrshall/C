#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100
#define ROZSAH 10

int main (void)
{
    float mat[MAX] [MAX+1],sum;
    int i,j,r,s;

    do{
        printf("Zadaj pocet riadkov matice.\n");
        scanf("%d",&r);
    }while(r<2 || r>MAX);

    do{
        printf("Zadaj pocet stlpcov matice.\n");
        scanf("%d",&s);
    }while(s<2 || s>MAX);

    for (i=0;i<r;i++)
    {
        for (j=0;j<s;j++)
        {
                printf("Zadaj prvok matice %d %d",i,j);
                scanf("%f",&mat[i][j]);
        }
    }
    printf("Toto je tvoja matica.\n");
    for (i=0;i<r;i++)
    {
        for (j=0;j<s;j++)
        {
            printf("%f\t",mat[i][j]);
        }
        printf("\n");
    }

    /*for(i=0;i<r;i++)
    {
        sum=0;
        for(j=0;j<s;j++)
        {
            sum+=mat[i][j];
        }
        mat[i][j]=sum;
    }*/

    for(i=0;i<r;i++)
    {
        sum=mat[i][0];
        for(j=1;j<s;j++)
        {
            sum+=mat[i][j];
        }
        mat[i][j]=sum;
    }

    printf("Toto je tvoja vysledna matica\n");
    for (i=0;i<r;i++)
    {
        for (j=0;j<=s;j++)
        {
                printf("%f\t",mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
