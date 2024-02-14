#include<stdio.h>
void main(){
    int sum=0,n,i=1,u;
    float avg;
    printf("How many number you choose ?");
    scanf("%d",&n);
    while(i<=n){
        printf("Choose your %d number   :   ",i);
        scanf("%d",&u);
        i++;
        sum=sum+u;
        avg=sum/n;
     
    }
       

       printf("%d\n",sum);
       printf("%f",avg);

}