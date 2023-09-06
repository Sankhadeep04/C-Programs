#include<stdio.h>
int main()
{
	int a,b,c,flag;
	intf("enter the ending range : ");
	scanf("%d",&c);
	a=2;
	while(a<=c)
	{
		b=2;
    	flag=1;
    	while (b<=a/2)
    	{
    		if(a%b==0)
			{
				flag=0;
				break;
			}
			b+=1;
		}
		if (flag==1)
		{
			printf("prime numbers in range :\n ",a);
		}
		a+=1;
	}
	
}
