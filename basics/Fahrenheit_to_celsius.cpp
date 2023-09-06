#include<stdio.h>
int main ()
{
	float f,c;
	printf("enter temp in fahrenheit : ");
	scanf("%f",&f);
	c=(f-32)*5/9;
	printf("temp in celsius : %f",c);
	
}
