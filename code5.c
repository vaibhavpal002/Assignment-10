/*Write a function to print first N odd natural numbers. (TSRN)*/
#include<stdio.h>
void odd(int number)
{
    int c;
    for(c=1;c<=number;c++)
    {
    printf("%d\n",2*c-1);
    }
    return 0;
}
void odd(int);
int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    odd(n);
    return 0;
}
