#include<stdio.h>
void main()
{
    int n,i,a[100];
    int even=0,odd=0;
    printf("\nEnter Size of Array:");
    scanf("%d",&n);
    printf("Enter elements of Array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
 	        even++;
        }
        else
        {
 	        odd++;
        }
    }
    printf("\nEven Numbers = %d",even);
    printf("\nOdd Numbers = %d",odd);
}