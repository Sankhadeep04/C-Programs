#include<stdio.h>
#include<string.h>
int main()
{
	char ch[10],ch2[20];
	
	printf("enter th first string : ");
	scanf("%s",&ch);
	printf("enter the second string : ");
	scanf("%s",&ch2);

	strncpy(ch,ch2,5);
	printf("the copied string is :%s",ch );
}

