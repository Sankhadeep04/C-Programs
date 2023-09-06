#include <stdio.h>

int main()
{
	char name[100];
    int i,j,flag ,count = 0;
    printf("Enter any number to check palindrome: ");
    scanf("%s", &name);
	for(i=0;name[i]!='\0';i++)
	{
		count++;
	}
	for(j=0;j<count;j++)
	{
		if(name[i]!=name[count-i-1])
		{
			flag=1;
			break;
		}
	}
    if(flag == 0)
    {
        printf("%s is palindrome.", name);
    }
    else
    {
        printf("%s is not palindrome.", name);
    }

}
