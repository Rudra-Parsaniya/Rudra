#include<stdio.h>

void main(){
    int n,count=0;
    printf("Enter value of n    :   ");
    scanf("%d",&n);

    while(n!=0){
        if((n%10)<=9){
            count=count+1;
            n=n/10;
        }
    }
    printf("Givien number digit = %d",count);
}