#include<stdio.h>
void main()
{
    int i,n, arr[100];
    printf("Enter a size of an array:");
    scanf("%d",&n);
    printf("Normal order:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nReverse order:\n");
    for(i=n-1;i>=0;i--)
    {
    printf("%d\n", arr[i]);
    }
}

    

    