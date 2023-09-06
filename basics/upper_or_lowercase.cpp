#include<stdio.h>
int main()
{
	char c;
	printf("enter a key to check if its uppercaseor lowercase : ");
	scanf("%c",&c);
	if (c>=97&&c<=122)
	{
		printf("the alphabet %c is lowercase ",c);
	}
	else if (c>=65&&c<=90)
	{
		printf("the alphabet %c is uppercase ",c);
	}
	else
	{
		printf("its not an alphabet");
	}
}
