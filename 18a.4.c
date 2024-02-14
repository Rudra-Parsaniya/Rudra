#include<stdio.h>
float g(float i,float j, float k);
void main(){
    float i,j,k;
    printf("enter three no.");
    scanf("%f %f %f",&i,&j,&k);
    float x=g(i,j,k);
    printf("greatest no is %f",x);

}
float g(float i,float j, float k){

    if(i>j){
        if(j>k){
            return i;
        }
        if(k>i){
            return k;
        }
    }
    else if(j>i){
        if(i>k){
            return j;
        }
        if(k>j){
            return k;
        }
    }
    
}