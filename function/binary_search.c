#include<stdio.h>
void Binary_search(int* ,int ,int );
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
   Binary_search(arr,n,key);
}
void Binary_search(int arr[],int n,int key) 
{
   int f=0,mid;
   
   while (f<=n)
    {
	  mid=(f+n)/2;

	  if (arr[mid]==key) 
	  {
         printf("Searched Element: %d  : Found :  Position : %d.\n",key, mid+1);
         break;
	  }
      else if (arr[mid]<key)
      {
        f= mid+1;  
	  }
      else
      {
        n=mid-1;
      }
   }
   if (f>n)
      printf("Searched Element : %d  : Not Found \n",key);
}
