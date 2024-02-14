#include<stdio.h>

void main(){
    int n,i=1,rem;
    printf("Enter value of n    :   ");
    scanf("%d",&n);

    while(n!=0){
        rem=n%10;
        printf("%d\t",rem);
        n=n/10;
    }

}