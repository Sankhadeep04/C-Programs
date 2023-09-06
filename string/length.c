#include<stdio.h>
int length(int, char* );
int main()
{
	char str[100];
	int gg,count;
	printf("enter any name :");
	scanf("%s",&str);
	length(count,str);
}
int length(int m,char str[])
{
	int count=0,i;
	for(i=0;str[i]!='\0';i++)
	{
		count++;
	}
	printf("%d",count);

}
