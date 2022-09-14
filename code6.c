/*Write a function to calculate the factorial of a number. (TSRS)*/
#include<stdio.h>
int factorial(int number)
{
    int i=1,a=1;
    if (number==0)
    {
        return a;
    }
    else
    {
        for(i=1;i<=number;i++)
        {
            a=a*i;
        }
        return a;
    }
}
int factorial(int);
int main()
{
    int n,s;
    printf("Enter the number:");
    scanf("%d",&n);
    s=factorial(n);
    printf("%d",s);
    return 0;
}