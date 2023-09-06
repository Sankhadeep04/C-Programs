	#include<stdio.h>
void unique(int* ,int);
int main()
{
	int i,j,n,k,ctr=0,arr1[100];
	printf("enter the total numbers of elements : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("enter %d element : ",i);
		scanf("%d",&arr1[i]);
	}
	unique(arr1,n);
}
void unique(int arr1[],int n)
{
	int i,j,k,c;
	for(i=0;i<n;i++)
	{	
		c = 0;
    	for(j=0; j<n; j++)
        {
            if(arr1[i] == arr1[j])
            	c++;
        }
        if(c==1)
        	printf("%d ",arr1[i]);
	}
}


