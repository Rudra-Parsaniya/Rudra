#include<stdio.h>
void main()
{
    int n,i,a[100];
    int PC=0,NC=0;
    printf("\nEnter Size of Array:");
    scanf("%d",&n);
    printf("\nEnter elements of Array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
        for(i=0;i<n;i++)
    {
        if(a[i]>=0)
        {
 	        PC++;
        }
        else
        {
 	        NC++;
        }
    }
    printf("\nPositive No.'s = %d",PC);
    printf("\nNegative No.'s = %d",NC);

}