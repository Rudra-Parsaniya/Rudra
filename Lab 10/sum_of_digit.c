#include<stdio.h>
void main(){
    int n,last,first;
    printf("Enter value of n    :   ");
    scanf("%d",&n);
    last=n%10;
    while(n>=9){
      first=n/10;
    }
    printf("%d",first+last);
}