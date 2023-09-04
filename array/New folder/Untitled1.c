#include<stdio.h>
int main()
{
	int i,rem,j=0,n;
	printf("enter the number to reverse : ");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		j=j*10+rem;
		n/=10;
	}
	printf("%d",j);
}
