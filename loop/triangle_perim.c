#include<stdio.h>
int main()
{
	int base,height,area,perimeter,a,c;
	printf("enter the height :");
	scanf("%d",&height);
	printf("enter the base : ");
	scanf("%d",&base);
	printf("enter the first side : ");
	scanf("%d",&a);
	printf("enter the second side : ");
	scanf("%d",&c);
	area=(height*base)/2;
	perimeter = (a+base+c);
	printf("the area of a triangle is :%d ",area);
	printf("\n the perimeter of a triangle is :%d ",perimeter);

}
