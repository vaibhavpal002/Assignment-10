/*Write a function to check whether a given number contains a given digit or not.*/
#include<stdio.h>
int check(int number,int digit)
{
while(number!=0)
{
    int a,result;
    a=number%10;
    if(a==digit)
    {
        return 1;
        break;
    }
    number=number/10;
}
}
int check(int,int);
int main()
{
    int number,digit;int s;
    printf("Enter the Number:");
    scanf("%d",&number);
    printf("Enter the digiit:");
    scanf("%d",&digit);
    s=check(number,digit);
    if(s==1)
    printf("found");
    else
    printf("Not Found");
    return 0;
}
