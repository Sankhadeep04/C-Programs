#include<stdio.h>
#include<math.h>
int main ()
{
	int number,base,power;
	printf("enter base- ");
	scanf("%d",&base);
	printf("enter power : ");
	scanf("%d",&power);
	number= pow(base,power);
	printf("the answer is %d",number);
	
}
