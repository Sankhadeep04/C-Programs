#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100];
	int i;
	printf("Enter the 1st string: ");
	scanf("%s",str1); 
	printf("Enter the 2nd string: ");
	scanf("%s",str2); 
	
	i = strcspn(str1,str2);
	printf("first charecter matched at %d\n",i+1);
}
