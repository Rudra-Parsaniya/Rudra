#include<stdio.h>

void main()
{
    int n,i=1,fac=0;
    printf("Enter value of n    :   ");
    scanf("%d",&n);

    while(i<=n){
        if(n%i==0){
            fac=fac+1;
        }
        i++;
    }
    printf("%d",fac);
}