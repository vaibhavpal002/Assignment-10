/*Write a function to calculate the number of combinations one can make from n items 
and r selected at a time. (TSRS)*/
#include<stdio.h>
int factorial(int number)
{
    int a=1,i;
    for(i=1;i<=number;i++)
    {
        a=a*i;
    }
    return a;
}
float combination(float number,float r)
{   
    float c=factorial(number);
    float d=(factorial(number)*factorial(number-r));
    float e=c/d;
    return e;
    
}
float combination(float,float);
int main()
{
    float n,r;
    printf("Enter the value of n: ");
    scanf("%f",&n);
    printf("Enter the value of r: ");
    scanf("%f",&r);
    float d=combination(n,r);
    printf("Combination is:%f",d);
    return 0;
}