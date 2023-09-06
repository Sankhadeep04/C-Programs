#include<stdio.h>
int main()
{
	int digit=0,number,res=0,mul=1,rem,dgt;
	printf("enter the number to check if its armstrong or not : ");
	scanf("%d",&number);
	int n=number;
	while(n!=0)
	{
		n/=10;
		digit++;
	}
	n=number;
	//dgt=digit;
	
	while(n!=0)
	{
		rem=n%10;
		
		while(dgt!=0)
		{
			mul=mul*rem;
			dgt--;
		}
		res=res+mul;
		//dgt=digit;
		n=n/10;
		mul=1;
	}
	if(res==number)
		printf("%d is an armstrong number",number);
	else
		printf("%d is not an armstrong number",number);
	
	
}
