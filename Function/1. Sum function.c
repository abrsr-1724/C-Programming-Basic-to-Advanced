#include<stdio.h>

int sum(int m, int n)
{
    return m+n;
}


int main()
{
    int a,b,result;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    result=sum(a,b);
    
    printf("The sum is:%d",result);
}