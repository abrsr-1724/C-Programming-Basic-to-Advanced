#include<stdio.h>
int main()
{
	int num[5],sum=0,i;

	num[0]=10;
	num[1]=20;
	num[2]=30;
	num[3]=40;
	num[4]=50;

	for(i=0;i<5;i++)
	{
		sum=sum+num[i];
	}

	printf("The sum is:%d\n",sum);
	printf("The average is:%.2f\n",(float)sum/5); //Type casting


	return 0;
}




/*

#include<stdio.h>
int main()
{
	int num[5]={10,20,30,40,50};
	int sum=0,i;

	

	for(i=0;i<5;i++)
	{
		sum=sum+num[i];
	}

	printf("The sum is:%d\n",sum);
	printf("The average is:%.2f\n",(float)sum/5); //Type casting


	return 0;
}

*/