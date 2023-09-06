
#include <stdio.h>

int main()
{
    int n, sum=0, last;

    printf("Enter any number: ");
    scanf("%d", &n);
	last=n%10;
	
    while(n>=10)
    {
    	n/=10;
	}
	sum=n+last;
	
	printf("sum of first digit %d and last digit %d is %d",n,last,sum);

    

    return 0;
}
