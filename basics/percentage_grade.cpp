#include<stdio.h>
int main()
{
	int p,c,m,e,b;	
	float percentage;
	printf("enter the physics marks : ");
	scanf("%d",&p);
	printf("enter the chemistry marks : ");
	scanf("%d",&c);
	printf("enter the maths marks : ");
	scanf("%d",&m);
	printf("enter the english marks : ");
	scanf("%d",&e);
	printf("enter the bengali marks : ");
	scanf("%d",&b);
	percentage=(p+c+m+e+b)/5.0;
	printf("the percentage is %.2f\n",percentage);
	
	if (percentage>=90)
	{
		printf("GRADE A");
	}
	else if (percentage>=80)
	{
		printf("GRADE B");
	}
	else if (percentage>=70)
	{
		printf("GRADE C");
	}
	else if (percentage>=60)
	{
		printf("GRADE D");
	}
	else if (percentage>=40)
	{
		printf("GRADE E");
	}
	else 
	{
		printf("GRADE F");
	}
}
