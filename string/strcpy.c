#include<stdio.h>
#include<string.h>
int main()
{
	char ch[10],ch2[20];
	printf("enter th first string : ");
	scanf("%s",&ch);
	printf("enter the second string : ");
	scanf("%s",&ch2);

	strcpy(ch,ch2);
	printf("the concatinate of both string is :%s",ch );
}

