#include<stdio.h>
int power(int,int);
void main(){
    int num,pow,res;
    printf("enter the value of num:");
    scanf("%d",&num);
    printf("enter the value of pow:");
    scanf("%d",&pow);
    res=power(num,pow);
    printf("the value of %d's power %d is %d",num,pow,res);

}
int power(int num, int pow){
    int res=1;
    while(pow>=1){
        res=res*num;
        pow--;
    }
    return res;
}