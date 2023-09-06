#include<stdio.h>
#include<math.h>
int main()
{
	float area,side;
	printf("enter side : ");
	scanf("%f",&side);
	area = (sqrt(3)/4)*(side*side);
	printf ("area of equilateral triangle is %f",area);
}
