#include<stdio.h>
int main()
{
	int i,j,n,m,d,sum=0,flag=0;
	printf("enter the number to check if its sum is prime or not : ");
	scanf("%d",&n);
   
	while(n!=0)    
	{      
		sum=sum+n%10;    
		n=n/10;    
	}    
	printf("Sum is: %d",sum);    
	for(i=2;i<=sum/2;i++)    
	{    
		if(sum%i==0)    
		{    
			printf("\nNumber is not prime\n");    
			flag=1;    
			break;    
		}    
	}    
	if(flag==0)    
		printf("\nNumber is prime\n");         
	
}   
