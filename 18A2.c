#include<stdio.h>
void max(int a,int b);
void min(int a,int b);
void main(){
    int a,b;
    printf("Enter value of A=");
    scanf("%d",&a);
    printf("Enter value of B=");
    scanf("%d",&b);
    max(a,b);   
    min(a,b); 
}
void max(int a,int b){
    if(a>b)
    {
        printf("the max no. is %d\n ",a);
    }
    else
    {
        printf("the max no. is %d\n ",b);
    }
}
void min(int a,int b){
    if(a<b)
    {
        printf("the min no. is %d\n ",a);
    }
    else
    {
        printf("the min no. is %d\n ",b);
    }
}
