#include<stdio.h>
#include<math.h>
int main()
{
	float principle,rate,time,interest;
	printf("enter principle: ");
	scanf("%f",&principle);
    printf("Enter time: ");
    scanf("%f",&time);
    printf("Enter rate: ");
    scanf("%f",&rate);
	interest = principle*(pow(1+rate/100),time);
	printf("compound interest %f",interest);
	
}
