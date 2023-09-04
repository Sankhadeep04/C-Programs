#include<stdio.h>
int is_prime(int);
int main()
{
	int n;
	printf("Enter a number :");
	scanf("%d",&n);
	if(is_prime(n))
	{
		printf("Prime");
	}
	else
	{
		printf("Not Prime");
	}
}
int is_prime(int n)
{
	int d,i;
	d=0;
	i=2;
	while(i<=n/2)
    {
        if(n%i==0)
        {
            d=1;
            break;
        }
        i++;
    }
	return d==0;
}
