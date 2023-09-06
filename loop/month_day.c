#include<stdio.h>
int main()
{
	int month;
	printf("enter the month number to check the days in that month : ");
	scanf("%d",&month);
	
	switch (month)
	{
		case 1:
			printf("31 days january");
			break;
		case 2:
			printf("28 days february");
			break;
		case 3:
			printf("31 days march");
			break;
		case 4:
			printf("30 days april");
			break;
		case 5:
			printf("31 days may");
			break;
		case 6:
			printf("30 days june");
			break;
		case 7:
			printf("31 days july");
			break;
		case 8:
			printf("30 days august");
			break;
		case 9:
			printf("31 days september");
			break;
		case 10:
			printf("30 days october");
			break;
		case 11:
			printf("31  november");
			break;
		case 12:
			printf("31 days december");
			break;
		default:
			printf("enter a valid month");
			break;
			
		
	}
}
