#include<stdio.h>
int main()
{
	int s1,s2,s3;
	printf("enter the first side : ");
	scanf("%d",&s1);
	printf("enter the second side : ");
	scanf("%d",&s2);
	printf("enter the third side : ");
	scanf("%d",&s3);
	if ((s1+s2>s3)&&(s2+s3>s1)&&(s1+s3>s2))
	{
		printf("the triangle is valid ");
	}
	else 
	{
		printf("the triangle is not valid ");
	}
}
