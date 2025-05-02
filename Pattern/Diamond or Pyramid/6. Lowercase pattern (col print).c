/*
Enter the number: 5
a 
a b 
a b c 
a b c d 
a b c d e 
a b c d 
a b c 
a b 
a 
*/


#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter the number: ");
    scanf("%d",&n);
    
    
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%c ",col+96);
        }
        printf("\n");
    }
    
    for(row=n-1;row>=1;row--)
    {
        for(col=1;col<=row;col++)
        {
            printf("%c ",col+96);
        }
        printf("\n");
    }
    
    
}