/*
Enter the number:5
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
    
    printf("Enter the number:");
    scanf("%d",&n);
    
    for(row=n;row>=1;row--)
    {
        for(col=1;col<=row;col++)
        {
            printf("%c ",row+96);
        }
        printf("\n");
    }
}
