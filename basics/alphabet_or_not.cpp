#include<stdio.h>
int main()
{
	char charecter;
	printf("enter any charecer : ");
	scanf("%c",&charecter);
	if ((charecter>=97 && charecter<=122) || (charecter>=65&&charecter<=90))
	{
		printf("the charecter %c is an alphabet",charecter);
	}
	else 
	{
		printf("the charecter %c is not an alphabet");
	}
}
