#include<stdio.h>
int main()
{
	int length,width,perimeter,area;
	printf("enter length of the rectangle - ");
	scanf("%d",&length);
	printf("enter width of the rectangle - ");
	scanf("%d",&width);
	perimeter = 2*(length+width);
	area = (length*width);
	printf("the perimeter of rectangle is %d",perimeter);
	printf("\n the area of rectangle is %d",area);

}
