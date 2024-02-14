#include<stdio.h>

void main()
{
    int i=1,n,odd=0,even=0,sum;
    printf("Enter value of n    :   ");
    scanf("%d",&n);

    while(i<=n){
        if(i%2==0){
           even=even+i;
        }else if(i%2!=0){
            odd=odd+i;
        }
        i++;
    }
    sum=odd-even;
    printf("%d",sum);
}