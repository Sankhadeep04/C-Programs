#include<stdio.h>
int in_fahrenheit(int);
int main()
{
	int c,f;
	printf("enter the fahrenheit : ");
	scanf("%d",&f);
	
	if(in_fahrenheit(f))
	{
		printf("celsius : %d",in_fahrenheit(f));
	}
}
int in_fahrenheit(int f)
{
	int c;
	c=(f-32)*5/9;
	return c;
}



