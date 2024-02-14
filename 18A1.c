#include<stdio.h>
void add(int a,int b);
void main(){
    int a,b;
    printf("Enter value of A=");
    scanf("%d",&a);
    printf("Enter value of B=");
    scanf("%d",&b);
    add(a,b);    
}
void add(int a,int b){
    printf("Add=%d",a+b);
}