#include<stdio.h>

void main()
{
    int n,i=0;

    while(i<=10){
        printf("Enetr a number n  :   ");
        scanf("%d",&n);
        
        if(n%2==0){
            printf("Even number\n");
        }else
        printf("odd number\n");
        i++;
    }
   
}
