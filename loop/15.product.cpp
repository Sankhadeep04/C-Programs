#include <stdio.h>

int main()
{
    int n,p;
    printf("enter a number : ");
    scanf("%d",&n);
	p=1;
	while(n>0)
	{
		p=p*(n%10);
		n/=10;
	}
	printf("product is %d\n",p);
}
