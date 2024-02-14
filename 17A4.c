#include<stdio.h>
void main(){
    int num1 = 10;
    int num2 = 20;
    int *ptr1 = &num1;
    int *ptr2 = &num2;
    printf("ptr1 %d and ptr2 %d\n",*ptr1,*ptr2);
    int *temp;
    temp=ptr1;
    ptr1=ptr2;
    ptr2=temp;
    printf("ptr1 %d and ptr2 %d", *ptr1,*ptr2);
}