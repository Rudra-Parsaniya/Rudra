#include<stdio.h>

void main()

{   int n;
    printf("Enter value of n(Day)   :   ");
    scanf("%d",&n);

    switch(n){
        case 31:
        printf("January\nMarch\nMay\nJuly\nAugust\nOctober\nDecember");
        break;

        case 30:
        printf("Aprill\nJune\nSeptember\nnovember");
        break;

        case 28:
        printf("February");
        break;

        default: 
        printf("Enter value of n 31,30 and 28");
        break;

    }
}