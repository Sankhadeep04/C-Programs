#include<stdio.h>
int main()
{
    int arr1[100],arr2[100],arr3[200];
    int s1,g,s;
    int i,j,k;
	   
       printf("Input the number of elements to be stored in the first array :");
       scanf("%d",&s1);
   
       printf("Input %d elements in the array :\n",s1);
       for(i=0;i<s1;i++)
        {
	      printf("element - %d : ",i);
	      scanf("%d",&arr1[i]);
	    }


       printf("Input the number of elements to be stored in the second array :");
       scanf("%d",&g);
   
       printf("Input %d elements in the array :\n",g);
       for(i=0;i<g;i++)
        {
	      printf("element - %d : ",i);
	      scanf("%d",&arr2[i]);
	    }

    s = s1 + g;
    for(i=0;i<s1;i++)
        {
            arr3[i] = arr1[i];
         }
     for(j=0;j<g;j++)
        {
            arr3[i]=arr2[j];
            i++; 
        }
   for(i=0;i<s;i++)
        {
           for(k=0;k<s-1;k++)
             {
         
                if(arr3[k]<=arr3[k+1])
                 {
                   j=arr3[k+1];
                   arr3[k+1]=arr3[k];
                   arr3[k]=j;
                 }  
              }
         }                      
     printf("\nThe merged array in decending order is :\n");
    for(i=0; i<s;i++)
    {
        printf("%d   ", arr3[i]);
    }
}
