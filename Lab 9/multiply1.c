//pow(x,y)=

#include<stdio.h>

void main()
{
    int x,y,i=1,multiply=1;
    printf("Enter value of base (x)           :   ");
    scanf("%d",&x);

    printf("Enter value power of base (y)     :   ");
    scanf("%d",&y);

    while(i<=y){
        multiply=multiply*x;
        i++;
    }
    printf("%d",multiply);

}