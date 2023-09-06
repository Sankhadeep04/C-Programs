
#include <stdio.h>

int main()
{
    int n, first, last;

    printf("Enter any number: ");
    scanf("%d", &n);
	last=n%10;
	
    while(n>=10)
    {
    	n/=10;
	}
	printf("first digit = %d\n", n);
    printf("last digit = %d\n",last);

    

    return 0;
}
