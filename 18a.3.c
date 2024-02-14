#include<stdio.h>
float interest(float p,float r,float t);
void main(){
    float p,r,t;
    scanf("%f %f %f",&p,&r,&t);
    float h=interest(p,r,t);
    printf("%f",h);
}
float  interest(float p,float r,float t){
    float c=(p*r*t)/100.0;
    return c;
}