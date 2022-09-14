/*Write a function to calculate the area of a circle. (TSRS)*/
#include<stdio.h>
float area(float radius)//formal arguments  
{
   float c=3.14*radius*radius;
    return c;
}                                                   
float area(float radius);//function declation
int main()
{
    float x,s;
    printf("Enter the value of radius:");
    scanf("%f",&x);
    s=area(x);//call by value,Actual arguments
    printf("Area of circle is:%.2f",s);
    return 0;
}