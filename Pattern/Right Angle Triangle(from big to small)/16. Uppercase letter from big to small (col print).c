/*
Enter the number:5
E E E E E 
D D D D 
C C C 
B B 
A 
 

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
            printf("%c ",col+64);
        }
        printf("\n");
    }
}