#include<stdio.h>
void max(int*,int*,int*,int*);
int main()
{
	int a,b,c,maxi;
	printf("Enter Any Three Numbers:\n");
	scanf("%d%d%d",&a,&b,&c);
	max(&a,&b,&c,&maxi);
	printf("maximum Number is: %d",maxi);
}
void max(int *d,int *e,int *f,int *m)
{    	
	if(*f<*d && *d>*e)
	{
		*m=*d;
	}
	else if(*d<*e && *e>*f)
	{
		*m=*e;
	}
	else if(*d<*f && *f>*e)
	{
		*m=*f;
	}
}
