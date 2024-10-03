#include<stdio.h>
int main()
{
	char s1[10];

	s1[0]='A';
	s1[1]='S';
	s1[2]='H';
	s1[3]='I';
	s1[4]='K';
	s1[5]='\0'; ////declare last index of string

	printf("%s\n",s1);

	return 0;
}
