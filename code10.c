/*Write a function to print all prime factors of a given number. For example, if the 
number is 36 then your result should be 2, 2, 3, 3. (TSRN)*/

#include<stdio.h>
void primefactors(int number)
{
    int a,i;
    a=number;
    for(i=2;i<=a;)
    {
    a=a/i;
    printf("%d ",i);
    if(a%i!=0)
    i++;  
    } 
    return;
}
void primefactors(int);
int main()
{
    int n;
    printf("Enter the Number:");
    scanf("%d",&n);
    primefactors(n);
    return 0;
}