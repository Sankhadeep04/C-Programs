#include<stdio.h>
int main()
{
    int n,i,j,ctr,arr1[100],arr2[100];	
    printf("Input the number of elements to be stored in the array :");
    scanf("%d",&n);
   
    printf("Input %d elements in the array :\n",n);
    for(i=0;i<n;i++)
    {
		printf("element - %d : ",i);
	    scanf("%d",&arr1[i]);
		arr2[i]=-1;
	}
    for(i=0;i<n;i++)
    {
        ctr=1;
        for(j=i+1;j<n;j++)
        {
            if(arr1[i]==arr1[j])
            {
                ctr++;
                arr2[j] = 0;
            }
        }

        if(arr2[i]!=0)
        {
            arr2[i] = ctr;
        }
    }
    printf("\nThe frequency of all elements of array : \n");
    for(i=0;i<n;i++)
    {
        if(arr2[i]!=0)
        {
            printf("%d founded %d times\n", arr1[i], arr2[i]);
        }
    }
}

