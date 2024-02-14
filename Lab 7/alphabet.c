#include<stdio.h>

void main()

{   char n;
    printf("Enter value of n    :   ");
    scanf("%c",&n);

    if(n>='a' && n<='z'){
        printf("Given value show an alphabet.");
    }
    else if(n>='A' && n<='Z'){
        printf("Given value show an alphabet.");
    }
    else{
        printf("Given value not show an alphabet.");
    }

    

}