#include<stdio.h>

void main()
{
    int a,b;
    char ch;

    printf("what you do +,-,*,/ :   ");
    scanf("%f",&ch);

    printf("Enter value of a    :   ");
    scanf("%d",&a);

    printf("Enter value of b    :   ");
    scanf("%d",&b);
    
    
    switch(ch){
    case '+':
    printf("sum of %d and %d = %d",a,b,a+b);
    break;

    case '-':
    printf("sub. of %d and %d = %d",a,b,a-b);
    break;

    case '*':
    printf("multi. of %d and %d = %d",a,b,a*b);
    break;

    case '/':
    printf("div. of %d and %d = %d",a,b,a/b);
    break;

    default :
    break;


    }
    


}