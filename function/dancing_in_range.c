#include<stdio.h>
int DancingInRange(int,int);
int main()
{
	int start,end,i;
	printf("Enter starting range:");
	scanf("%d",&start);
	printf("Enter ending range:");
	scanf("%d",&end);
	for(i=start;i<=end;i++)
	{
		if(is_dancing(i))
		{
			printf("dancing numbers in range are :%d\n",i);
		}
    }
}
int is_dancing(int n)
{
	int a,b,flag=0;
		while(n>10)
		{
			a=n%10;
			n/=10;
			b=n%10;
			if(a-b==1&&a-b==-1)
			{
				flag=1;
				break;
			}
		}
		return flag==0;
}

