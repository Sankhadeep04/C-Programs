#include<stdio.h>
void fibonacci(int);
int main()
{
	int terms,d;
	printf("Enter number of terms:");
	scanf("%d",&terms);
	fibonacci(terms);
}
void fibonacci(int terms)
{
	int a,b,c,i;
	a = 0;
    b = 1;
    c = 0;
    printf("Fibonacci series:");
    for(i=1; i<=terms; i++)
    {
        printf(" %d, ", c);
        a = b;     
        b = c;     
        c = a+b; 
    }

}
