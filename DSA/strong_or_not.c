#include<stdio.h>
int main()
{
	int fact=1,n,result=0,i,number,rem;
	printf("enter a number : ");
	scanf("%d",&number);
	
	n=number;
	while (n !=0)
	{
		rem=n%10;
		for(i=1;i<=rem;i++)
		{
			fact*=i;
			
		}
		result+=fact;
		fact=1;
		n/=10;
	}
	if (result==number)
		printf("%d is a strong number",number);
	else	
		printf("%d is not a strong number",number);
}
