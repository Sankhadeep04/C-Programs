#include<stdio.h>
int main()
{
	int l1,l2,l3,sum;
	printf("enter first angle lentgh : ");
	scanf("%d",&l1);
	printf("enter second angle lentgh : ");
	scanf("%d",&l2);
	printf("enter third angle lentgh : ");
	scanf("%d",&l3);
	sum=l1+l2+l3;
	if (sum==180)
	{
		printf("its a valid triangle ");
	}	
	else 
	{	
		printf("its not a valid triangle ");
	}
	
}
