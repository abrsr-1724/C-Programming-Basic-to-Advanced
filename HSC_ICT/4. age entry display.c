#include<stdio.h>
int main()
{
    int age;
    printf("Enter the age:");
    scanf("%d",&age);
    if((age>0) && (age<=12))
    {
        printf("You are a child");
    }
    else if((age>12) && (age<=19))
    {
        printf("You are a teen ager");
    }
    else
    {
        printf("You are a mature");
    }
    
    return 0;
}