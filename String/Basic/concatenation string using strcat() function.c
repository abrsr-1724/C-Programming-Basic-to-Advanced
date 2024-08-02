#include<stdio.h>
int main()
{
    char str1[]="This is ";
    char str2[]="Ashik Billah";

    strcat(str1,str2);
    printf("Concatenation: %s\n",str1);

    return 0;
}
