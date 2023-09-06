#include<stdio.h>
#include<string.h>
int main()
{
	char ch[50],ch1[50];
	int i,j,count=0,flag=0;
	printf("enter the first string : ");
	scanf("%s",&ch);
	printf("enter the second string to find first charecter : ");
	scanf("%s",&ch1);
	
	for(i=0;i<strlen(ch);i++)
	{
		for(j=0;j<strlen(ch1);j++)
		{
			if(ch[i]==ch1[j])
			{
				flag=1;
				count++;
			}
		}
	}
	if(flag==1)
	{
		printf("total commons are %d",count);
	}
	else
	{
		printf("not found");
	}
}
