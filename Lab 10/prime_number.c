#include<stdio.h>

void main(){
    int n,i=2,count=0;
    printf("Enetr value of n    :   ");
    scanf("%d",&n);

    while(i<=n/2){
        if(n%i==0){
        count=count+1;
        }
        i++;
    }
    if(count==0){
        printf("%d is prime number.",i);
    }else{
        printf("%d is not prime number.",i);
    }
    }
