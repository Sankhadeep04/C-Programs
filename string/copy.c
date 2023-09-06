#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char ch[10],ch2[20];
	printf("enter th first string : ");
	scanf("%s",&ch);
	while(ch[i]!='\0')
	{
		ch2[i]=ch[i];
		i++;
	}
	ch2[i]='\0';
	printf("the copied string is :%s",ch2);
}
