#include<stdio.h>

void main()
{
    int n,i=0,sum=0;
    printf("Enetr a number n  :   ");
    scanf("%d",&n);

    while(i<=n){
        sum=sum+i;
        i++;
    }
    printf("%d",sum);
}