#include<stdio.h>

int facTorial(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i=i+1)
    {
        fact=fact*i;
    }
    printf("The factorail is:%d",fact);
}


int main()
{
    int a,function;
    printf("Enter the number:");
    scanf("%d",&a);
    function=facTorial(a);
    
}
    
    
