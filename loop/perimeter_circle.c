#include<stdio.h>

void main()
{
	float pi=3.1415,radius,perimeter,area;
	printf("enter the radius : ");
	scanf("%f",&radius);
	perimeter=2*pi*radius;
	area = pi*radius*radius;
	printf("perimeter is : %f",perimeter);
	printf("\narea is :%f",area);
}
