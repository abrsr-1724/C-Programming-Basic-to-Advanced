/*
Enter the number: 5
a 
b b 
c c c 
d d d d 
e e e e e 
d d d d 
c c c 
b b 
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
            printf("%c ",row+96);
        }
        printf("\n");
    }
    
    for(row=n-1;row>=1;row--)
    {
        for(col=1;col<=row;col++)
        {
            printf("%c ",row+96);
        }
        printf("\n");
    }
    
    
}