#include<stdio.h>
int is_palindrome(int);
int main()
{
	int n;
	printf("enter a number to check if its palindrome or not : ");
	scanf("%d",&n);
	if(is_palindrome(n))
	{
		printf("%d is palindrome number.",n);
	}
	else
	{
		printf("%d is not a palindrome number.",n);
	}
}

int is_palindrome(int n)
{
	int num,rev=0;
	num=n; 
    while(n != 0)
    {
        rev = (rev*10)+(n%10);
        n=n/10;
    }
    return rev==num;
}
