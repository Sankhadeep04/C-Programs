#include<stdio.h>
int main()
{
	float maths,english,bengali,physics,chemistry;
	float percentage,total,average;
	printf("enter marks of maths : ");
	scanf("%f",&maths);
	printf("enter marks of english : ");
	scanf("%f",&english);
	printf("enter marks of bengali : ");
	scanf("%f",&bengali);
	printf("enter marks of physics : ");
	scanf("%f",&physics);
	printf("enter marks of chemistry : ");
	scanf("%f",&chemistry);
	
	
	total=maths+english+bengali+physics+chemistry;
	percentage =(total/500)*100;
	average = total/5.0;
	printf("total marks =%f\n",total);
	printf("percentage = %f\n",percentage);
	printf("average = %f\n",average);
	
	
	
}
