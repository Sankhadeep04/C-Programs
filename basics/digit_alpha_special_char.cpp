#include<stdio.h>
int main()
{
	char c;
	printf("enter to check if its alphabet,digit or special charecter : ");
	scanf("%c",&c);
	if ((c>=97&&c<=122)||(c>=65&&c<=90))
	{
		printf("charecter %c is alphabet",c);
	}
	else if ((c>=48&&c<=57))
	{
		printf("the charecter %c is digit",c);
	}
	else 
	{
		printf("%c is a special charecter",c);
	}
}
