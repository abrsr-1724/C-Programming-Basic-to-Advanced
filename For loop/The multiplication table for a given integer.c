#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    printf("15 X %d = %d\n",i,i*15);
    return 0;
}