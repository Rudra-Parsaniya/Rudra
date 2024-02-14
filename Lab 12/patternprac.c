#include<stdio.h>
void main(){
    int i,n,m;
    printf("enter the value of n:%d");
    scanf("%d",&n);
    n=m;

    for(i=1;i<=n;i++){
        for(i=1;i<=m;i++){
            printf("*");
        }
        printf("\n");
    }
}