/*Write a function to print first N natural numbers (TSRN)*/
#include<stdio.h>
void num(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        printf("%d\n",i);
    }
    return 0;
}
void num(int);
int main()
{
    int number;
    printf("Enter the number:");
    scanf("%d",&number);
    num(number);
    return 0;
}