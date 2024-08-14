#include<stdio.h>
#include<string.h>
int main()
{
    char str1[]="Ashik Billah";
    char str2[]="Ashik Billah";

    int d=strcmp(str1,str2);//strcmp is a string compare function
    if(d==0)
    {
        printf("Strings are equal");
    }

    else
    {
        printf("Strings are not equal");
    }

    return 0;
}
