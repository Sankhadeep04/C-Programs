#include<stdio.h>
void Frequency(int*,int *,int);
int main()
{
    int n,i,j,ctr,arr1[100],arr2[100];	
    printf("Enter the number of elements in the array :");
    scanf("%d",&n);
   
    printf("Enter the elements of the array:\n");
    printf("elements are : ");
    for(i=0;i<n;i++)
    {
	    scanf("%d",&arr1[i]);
		arr2[i]=-1;
	}
	Frequency(arr1,arr2,n);
	printf("The frequency of all elements of array: \n");
    for(i=0;i<n;i++)
    {
        if(arr2[i]!=0)
        {
            printf("%d founded %d times\n", arr1[i], arr2[i]);
        }
    }
}
void Frequency(int arr1[],int arr2[],int n)
{
	int i,ctr,j;
    for(i=0;i<n;i++)
    {
        ctr=1;
        for(j=i+1;j<n;j++)
        {
            if(arr1[i]==arr1[j])
            {
                ctr++;
                arr2[j]=0;
            }
        }
        if(arr2[i]!=0)
        {
            arr2[i]=ctr;
        }
    }
    
}
