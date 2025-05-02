#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a charecter:");
    scanf("%c",&ch);
    
    if((ch>='A') && (ch<='Z'))
    {
        printf("You entered a capital letter");
    }
    
    else if((ch>='a') && (ch<='z'))
    {
        printf("You entered a small letter");
    }
    else
    {
        printf("The letter you entered is not a charecter");
    }
    
    return 0;
}