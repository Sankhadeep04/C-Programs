#include<stdio.h>
int in_celsius(int);
int main()
{
	int c,f;
	printf("enter the celsius : ");
	scanf("%d",&c);
	
	if(in_celsius(c))
	{
		printf("fahrenheit : %d",in_celsius(c));
	}
}
int in_celsius(int c)
{
	int f;
	f=(c*9/5)+32;
}

