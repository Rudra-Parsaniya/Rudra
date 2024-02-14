#include<stdio.h>

void main(){
    int n,digit,temp=0;
    printf("Enetr value of n    :   ");
    scanf("%d",&n);

    while(n!=0){
        digit=n%10;
        temp=(temp*10)+digit;
        n=n/10;
    }
    if(temp==n){
        printf("Givien number is palindrome.");
    }else{
        printf("Given number is not palindrome.");
    }
}