#include<stdio.h>
int main()
{
	int a;
	printf("enter te amount : ");
	scanf("%d",&a);
	printf("total number of notes : \n");
	printf("500 : %d",a500);
	a=a%500;
	printf("200 :",a/200);
	a=a%200;
	printf("100 : ",a/100);
	a=a%100;
	printf("50 : ",a/50);
	a=a%50;
	printf("20 : ",a/20);
	a=a%20;
	printf("10 : ",a/10);
	a=a%10;
	printf("5 :",a/5);
	a=a%5;
	printf("1 :",a/1);
	a=a%1;
}
