#include<stdio.h>
int main()
{
	int num[5],sum=0,i;

	printf("Enter five numbers: ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&num[i]);
	}

	
	for(i=0;i<5;i++)
	{
		sum=sum+num[i];
	}

	printf("The sum is:%d\n",sum);
	printf("The average is:%.2f\n",(float)sum/5); //Type casting


	return 0;
}
