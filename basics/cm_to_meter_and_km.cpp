#include<stdio.h>
int main()
{
	float cm,m,km;
	printf("enter length in cm - ");
	scanf("%f",&cm);
	m = cm/100;
	km = cm/100000;
	printf("in meter : %f \n",m);
	printf("in kilometer:%f",km);
	
	
}
