#include<stdio.h>

void main()
{
    int n,i=0;
    printf("Enetr a number n  :   ");
    scanf("%d",&n);

    while(i<=n){
        if(i%2==0){
        printf("%d\t",i);
        }
        i++;

    }
}