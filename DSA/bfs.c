#include<stdio.h>
#include<stdlib.h>
#define MAX 5
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
struct node *root=NULL;
int queue[MAX],start=-1,end=-1;
void insert();
void deletee();
void display();
int isEmpty();
int isFull();
void bfs();
int size(int l);
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
				insert();
				break;
			case 2:
				deletee();
				break;
			case 3:
				();
				break;
			default:
				printf("invalid choice \n");
				
				
		}
	}
}
int isEmpty()
{
	return top==-1;
}
int isFull()
{
	return top==Max-1;
}
void insert()
{
	int element;
	if(end==MAX-1)
	{
//		printf("queue is full \n");

	}
	else
   	{
//   		printf("enter the element to insert : ");
//   		scanf("%d",&element);
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
void deletee()
{
	if(start==-1 && end == -1)
	{
//		printf("queue is empty \n");
	}
	else if(start==end)
	{
//		printf("the deleted element from queue is : %d",queue[start]);
		start =-1;
		end=-1;
	}
	else
	{
//		printf("the deleted element from queue is : %d",queue[start]);
		start++;
	}
}
void bfs()
{
	if(node->left != NULL)
	{
		insert(node->left);
	}
	if(node->right != NULL)
	{
		insert(node->right);
	}
	if(root != NULL)
	{
		insert(root);
	}
	while(size(temp) != 0)
	{
		S = size(temp);
		for(i=1 ; i<=S;i++)
		{
			if(node->left != NULL)
			{
				insert(node->left);
			}
			if(node->right != NULL)
			{
				insert(node->right);
			}
			printf("%d",node->data);
			deletee(node);
		}
	}
}
int size(int s)
{
	
}
