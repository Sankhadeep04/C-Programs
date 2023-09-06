#include<stdio.h>
int main()
{
	int i,max,count=1,arr[5];
	
	for(i=0;i<5;i++)
	{
		printf("enter the game levels in order : ");
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	for(i=0;i<5;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
			count++;
		}
	}
	printf("the max reward the gamer will get is : %d",count);
}
