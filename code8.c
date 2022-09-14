/*Write a function to calculate the number of arrangements one can make from n items 
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
float permutation(float number,float r)
{
    float c;
    c=factorial(number)/factorial(r);
    return c;
}
float permutation(float,float);
int main()
{
    float n,r;
    printf("Enter the Number:");
    scanf("%f",&n);
    printf("Enter the Radius:");
    scanf("%f",&r);
    printf("Permutation:%.2f",permutation(n,r));
    return 0;
}
