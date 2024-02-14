#include<stdio.h>

void main()
{
    int n,temp;
    printf("Enter value of n    :   ");
    scanf("%d",&n);

    temp=(n%2==0)?(0):(1);
     printf("%d\n",temp);
    printf("temp=0 mean even number.\ntemp=1 mean odd number.\n");
}