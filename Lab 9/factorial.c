#include<stdio.h>

void main()
{
    int  n,i=1,fac=1;
    printf("Enter value of n    :   ");
    scanf("%d",&n);

    while(i<=n){
        fac=fac*i;
        i++;
    }
    printf("%d",fac);
}