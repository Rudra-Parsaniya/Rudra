#include <stdio.h>
void main() 
{
    int n=5,h[n],w[n],a=0,b=0;
    int  

        printf("Enter height %d:", i+1);
        scanf("%d",&h[i]);
        printf("Enter weight %d:", i+1);
        scanf("%d", &w[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(h[i]>170)
        {
            a++;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(w[i]<50)
        {
            b++;
        }
    }
    printf("Person having Height greater than 170 are %d and weight lesser than 50 are %d",a,b);
}