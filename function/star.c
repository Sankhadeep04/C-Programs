#include<stdio.h>
void rhoumbus(int);
void hollow_right_triangle(int);
void pyramid(int);
void square(int);
void half_diamond(int);
void reverse_pyramid(int);
void main()
{
	void pattern,a,b,c,d,e,f,n;
	printf("Enter a number bet 1 to 6 to print unique star patterns:");
	scanf("%d",&pattern);
	printf("Enter number of rows:");
	scanf("%d",&n);
	if(pattern==1)
	{
		rhoumbus(n);
	}
	else if(pattern==2)
	{
		square(n);
	}
	else if(pattern==3)
	{
		hollow_right_triangle(n);
	}
	else if(pattern==4)
	{
		(pyramid(n));
	}
	else if(pattern==5)
	{
		half_diamond(n);
	}
	else if(pattern==6)
	{
		reverse_pyramid(n);
	}
}
void square(int n)
{
	int i, j;
    for(i=1; i<=n ;i++)
    {
        for(j=1; j<=n ;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void rhoumbus(int n)
{
	int i, j;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n - i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void hollow_right_triangle(int n)
{
	int i, j, rows;
    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=i; j++)
        { 
            if(j==1 || j==i || i==rows)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
void pyramid(int n)
{
	 int i, j;
    for(i=1; i<=n; i++)
    { 
        for(j=i; j<n; j++)
        {
            printf(" ");
        }
        for(j=1; j<=(2*i-1); j++)
        {
            printf("*");
        }
        printf("\n");
    }  
}
void half_diamond(int n)
{
	int i, j, N, columns;
    columns=1;

    for(i=1;i<N*2;i++)
    {
        for(j=1; j<=columns; j++)
        {
            printf("*");
        }

        if(i < N)
        {
            columns++;
        }
        else
        {
            columns--;
        }
        printf("\n");
    }
}
void reverse_pyramid(int n)
{
	int i,j;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<i; j++)
        {
            printf(" ");
        }

        for(j=1; j<=(n*2 -(2*i-1)); j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
