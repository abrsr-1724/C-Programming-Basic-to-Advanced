#include<stdio.h>
int main()
{
    int i,s,n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        s +=i;
    }
    printf("Sum= %d",s);
    
    
    return 0;
}