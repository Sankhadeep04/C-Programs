#include<stdio.h>
int main()
{
	int radious,diameter,circumference,area;
	printf("enter the radious of circle - ");
	scanf("%d",&radious);
	diameter = 2*radious;
	circumference = 2*3.14*radious;
	area = (radious*radious)*3.14;
	
	printf("the area pf the circle is %d \n",area);
	printf("the diameter of the cirle is %d \n",diameter);
	printf("the circumference of the circle is %d \n",circumference);
}
