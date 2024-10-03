#include<stdio.h>
int main()
{
    char name[20];
    printf("Enter your name: ");
    gets(name);
    printf("Full name: %s\n",name);

    return 0;
}
