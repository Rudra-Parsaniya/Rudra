#include<stdio.h>

void main()
{
    int n;

    for(n=101;n<200;n++){
        if(n%7==0){
            if(n%5!=0){
                printf("%d\t",n);
            }
        }
    }
}