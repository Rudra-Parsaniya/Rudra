#include<stdio.h>
#include<math.h>

void main()
{
    int n,i=1;
    float sr;
    
    printf("Enter value of n    :   ");
    scanf("%d",&n);

    while(i<=n){
        sr=sqrt (i);
         printf("%f\n",sr);
        i++;
    }
   
}