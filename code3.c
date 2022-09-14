/*Write a function to check whether a given number is even or odd. Return 1 if the 
number is even, otherwise return 0. (TSRS)*/
#include<stdio.h>
int check(int num)
{
    int result = num%2==0?1:0;
    return result;
}
#include<stdio.h>
int main()
{
    int number,s;
    printf("Enter the Number:");
    scanf("%d",&number);
    s=check(number);
    printf("%d",s);
    return 0;
}