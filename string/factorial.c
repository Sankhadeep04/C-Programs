#include <stdio.h>
int factorial(int n)
{
    if (n==1||n==0)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
}
int main()
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d",&num);

    if(num<0)
    {
        printf("factorial isnot defined\n");
    }
	else
	{
    	printf("Factorial of %d is: %d\n",num,factorial(num));
	}
}
