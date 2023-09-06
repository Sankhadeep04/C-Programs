#include<stdio.h>
int checkpalindrome(char*) ;
int main()
{
 
    char name[100]; 
	int ctr; 
    printf("Enter the string to check if its palindrome : ");
    scanf("%s",&name);
	ctr=checkpalindrome(name);
    if(checkpalindrome(name))
    {
    	printf("string is palindrome");
	}
 	    
    else
    {
    	printf("string is not palindrome");
	}
}

int checkpalindrome(char name[])
{
    int i,c=0,n=0;
    for(i=0;name[i]!='\0';i++)
	{
		n++;
	}
	for(i=0;i<n/2;i++)  
    {
    	if(name[i]==name[n-i-1])
    		c++;
 
 	}
 	return c == n;    
}
