#include<stdio.h>
#include<string.h>
int main()
{
	int length;
	char ch[10];
	printf("enter to rev : ");
	scanf("%s",&ch);

	strrev(ch);
	printf("after reverse the string is : s",ch);
}

