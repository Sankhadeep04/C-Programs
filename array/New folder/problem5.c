#include<stdio.h>
int main()
{
	int i,j,n,count=1,ctr=0,arr1[100],arr2[100],arr3[100];
	printf("enter the total numbers of elements : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("enter %d element : ",i);
		scanf("%d",&arr1[i]);
	}
	for(i=0;i<n; i++)
        {
		arr2[i]=arr1[i];
		arr3[i]=0;
        }
        for(i=0;i<n; i++)
        {
		for(j=0;j<n;j++)
			{
				if(arr1[i]==arr2[j])
				{
				arr3[j]=count;
				count++;
				}
			}
			count=1;
        }		
    for(i=0; i<n; i++)
    {
      if(arr3[i]==2){ctr++;}  
    }
	printf("total duplicate number in this array is : %d",ctr);
}
