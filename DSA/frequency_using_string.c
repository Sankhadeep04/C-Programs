#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,n,ctr;
	char str1[100],str2[100];
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	n='\0';
	for(i=0;str1[i]!='\0';i++)
	{
		printf("Elements : ");
		scanf("%s",&str1[i]);
		str2[i]=-1;
	
	for(i=0;str1[i]!='\0';i++)
	{
		ctr=1;
		for(j=i+1;str1[j]!='\0';j++)
		{
			if(str1[i]==str1[j])
			{
				ctr++;
				str2[j]=0;
			}
		}
		if(str2[i]!=0)
		{
			str2[i]=ctr;
		}
	}
	printf("The frequency of all elements of string: \n");
    for(i=0;str1[i]!='\0';i++)
    {
        if(str2[i]!=0)
        {
            printf("%s founded %s times\n", str1[i], str2[i]);
        }
    }
	}
}
