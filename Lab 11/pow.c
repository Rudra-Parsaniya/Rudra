#include<stdio.h>

void main(){
    int x,y,i,multiply=1;

     printf("Enter value of base (x)           :   ");
    scanf("%d",&x);

    printf("Enter value power of base (y)     :   ");
    scanf("%d",&y);

    for(i=1;i<=y;i++){
        multiply=multiply*x;
    }
    printf("%d",multiply);
    
}