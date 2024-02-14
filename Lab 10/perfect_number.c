#include<stdio.h>

void main(){
    int n,sum=0,i=2,fac;
    printf("Enter value of n    :   ");
    scanf("%d",&n);

    while(i<=n){
        if(n%i==0){
            n=n/2;
            fac=fac+i;
            sum=1+sum+fac;
        }
    }
    if(sum==n){
        printf("Givien number is perfect.");
    }else{
        printf("Givien number is not perfect.");
    }
}