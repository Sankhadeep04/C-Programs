#include<stdio.h>
#define MAX 5
int queue[MAX],start=-1,end=-1;
void insert();
void deletee();
void display();
int main()
{
	int a;
	printf("enter 1 to insert element \n");
	printf("enter 2 to delete element \n");
	printf("enter 3 to display\n");
	printf("enter 4 to exit\n");

	while(1)
	{
		printf("\nenter a number : ");
		scanf("%d",&a);
		switch(a)
		{
			case 1:
				enqueue();
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			default:
				printf("invalid choice \n");
				
				
		}
	}
}
void enqueue()
{
	int element;
	if(end==MAX-1)
	{
		printf("queue is full \n");

	}
	else
   	{
   		printf("enter the element to insert : ");
   		scanf("%d",&element);
   		if((start==-1) && (end==-1))
	   	{
		   	start=0;  
	        end=0;  
	        queue[end]=element;  
	    } 
	    else  
	    {  
	        end++;
	        queue[end]=element;
	    }  
	}
}
void dequeue()
{
	if(start==-1 && end == -1)
	{
		printf("queue is empty \n");
	}
	else if(start==end)
	{
		printf("the deleted element from queue is : %d",queue[start]);
		start =-1;
		end=-1;
	}
	else
	{
		printf("the deleted element from queue is : %d",queue[start]);
		start++;
	}
}
void display()
{
	int i;
	if(start == -1 && end == -1)
	{
		printf("\nthe queue is empty \n");
		
	} 
	else
	{
		printf("elements : ");
		for(i=start;i<end+1;i++)
		{
			printf("\%d ,",queue[i]);
		}
	}
}
