#include<stdio.h>
int linear_search(int*,int,int);
int main()
{
   int arr[100],key,i,n,position;
   printf("Enter the number of elements in array:\n");
   scanf("%d",&n);
   printf("Enter %d numbers:\n", n);
   for (i=0;i<n;i++)
   {
      scanf("%d",&arr[i]);
   }
   printf("Enter the number you want to find:\n");
   scanf("%d",&key);
   position = linear_search(arr,n,key);
   if ( position==-1 )
   {
    printf("not found in the array\n");
   }
   else
   {
    printf("present at position %d\n",position+1);
   }
    return 0;
} 
int linear_search(int *pointer,int n,int key)
{
   int i;
   for (i=0;i<n;i++)
   {
      if (*(pointer+i)==key)
      {
        return i;
      }
   }
   return -1;
}
