#include<stdio.h>

float triAngle(float base, float height)
{
    printf("Trianlge area is:%f",0.5*base*height);
}



int main()
{
    float base,height,area;
    printf("Enter the base:");
    scanf("%f",&base);
    
    printf("Enter the height:");
    scanf("%f",&height);
    
    area=triAngle(base,height);
    
    
}