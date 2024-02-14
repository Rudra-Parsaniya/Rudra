#include <stdio.h>
void main()
{
     int n,i,a[100],sum=0,max,min;
     float avg;
     printf("Enter Array size:");
     scanf("%d",&n);
     printf("Enter elements of array:");
     for(i=0;i<n;i++)
     {
          scanf("%d",&a[i]);
          sum=sum+a[i];
          avg=sum/n;
     }
     printf("Sum= %d\n",sum);
     printf("Avg= %0.2f\n",avg);
     max=a[0];
     for(i=0;i<n;i++)
          if(a[i]>max)
               max=a[i];
     printf("Max= %d\n",max);
     min=a[0];
     for(i=0;i<n;i++)
          if(a[i]<min)
               min=a[i];
     printf("Min= %d",min);
}