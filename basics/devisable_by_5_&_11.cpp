#include<stdio.h>
int main()
{
	int number;
	
	printf("enter the number to check if its devisable by 5 and 11 : ");
	scanf("%d",&number);
	if ((number%5==0) && (number%11==0))
	{
		printf("the number %d is devisable by 5 and 11",number);
	}
	else
	{
		printf("the number %d is not devisable by 11 and 5",number);
	}
}
