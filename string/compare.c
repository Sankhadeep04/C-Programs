#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,flag=0;
	char ch[50],ch1[50];
	printf("enter the first string : ");
	scanf("%s",&ch);
	printf("enter the second string : ");
	scanf("%s",&ch1);
	for(i=0;i<'\0';i++)
	{
		for(j=0;j<'\0';j++)
		{
			if(ch[i]!=ch1[j])
			{
				flag=1;
				break;
			}
		}
	}
	if(flag==0)
	{
		printf("both strings are same.");
	}
	else
	{
		printf("both strings are not same.");
	}
}
