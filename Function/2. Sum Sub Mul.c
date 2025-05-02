#include<stdio.h>

int sum(int a, int b, int c)
{
    printf("The sum is:%d\n",a+b+c);
}


int sub(int a, int b, int c)
{
    printf("The sub is:%d\n",a-b-c);
}


int mul(int a, int b, int c)
{
    printf("The mul is:%d\n",a*b*c);
}



int main()
{
    sum(10,20,30);
    sub(500,100,300);
    mul(50,60,70);
}