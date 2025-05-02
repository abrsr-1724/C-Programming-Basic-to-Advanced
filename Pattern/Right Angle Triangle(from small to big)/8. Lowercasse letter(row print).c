/*
Enter the number:5
a 
b b 
c c c 
d d d d 
e e e e e
*/

#include<stdio.h>
int main()
{
    int n,row,col;
    
    printf("Enter the number:");
    scanf("%d",&n);
    
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%c ",row+96);
        }
        printf("\n");
    }
}
