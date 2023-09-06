#include<stdio.h>
#include<string.h>
int main()
{
	int value;
	char ch1[10],ch2[10];
	printf("enter th first string : ");
	scanf("%s",&ch1);
	printf("enter the second string : ");
	scanf("%s",&ch2);
	value = strcmp(ch1,ch2);
	if (value==0)
	{
		printf("same");
	}
	else 
	{
		printf("not same ");
	}
}
