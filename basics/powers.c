#include<stdio.h>
int main()
{
	int a,b,y=1,s=1;
	printf("enter the number : ");
	scanf("%d",&a);
	printf("enter the power : ");
	scanf("%d",&b);
	while(y<=b)
	{
		s=s*a;
		y++;
	}
	printf("%d",s);
	
}
