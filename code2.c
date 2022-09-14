/*Write a function to calculate simple interest. (TSRS)*/
#include<stdio.h>
float interest(float x,float y,float z)
{
    float c=(x*y*z)/100;
    return c;
}
float interest(float x,float y,float z);
int main()
{
    float p,r,t,s;
    printf("Enter principal value:");
    scanf("%f",&p);
    printf("Enter rate:");
    scanf("%f",&r);
    printf("Enter time:");
    scanf("%f",&t);
    s=interest(p,r,t);
    printf("Interest is:%0.2f",s);
    return 0;
}