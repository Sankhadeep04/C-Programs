#include<stdio.h>
#include<string.h>

int main()
{
	char ch[50],ch1[50];
	int i,flag=0;
	printf("enter the first string : ");
	scanf("%s",&ch);
	printf("enter the second string to find first charecter : ");
	scanf("%s",&ch1);
	
	for(i=0;i<strlen(ch);i++)
	{
		if(ch[i]==ch1[0])
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("char found at %d",i+1);
	}
	else
	{
		printf("not found");
	}
}
