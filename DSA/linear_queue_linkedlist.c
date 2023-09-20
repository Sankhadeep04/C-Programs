#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *link;
	 
};
void insert_at_begin(int);
void delete_at_end();
void display();
struct node *start =NULL;
int main()
{
	int ch,el,pos;
		printf("Enter 1 to push an element\n");
		printf("Enter 2 to pop an element\n");
		printf("Enter 3 to display the stack\n");
		printf("Enter 4 to exit\n");
		while(1)
	{
		printf("Enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter an Element :");
				scanf("%d",&el);
				insert_at_begin(el);
				break;
			case 2:
				delete_at_end();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
				break;
			default:
				printf("Invalid Choice\n");
		}
	}
} 
void delete_at_end()
{
	struct node *temp,*i,*t;
	if(start==NULL)
	{
		printf("queue is empty\n");
	}
	else
	{
		if(start->link==NULL)
		{
			t=start;
			start=NULL;
			free(t);	
		}
		else
		{
			i=start;
			while(i->link->link!=NULL)
			{
				i=i->link;
			}
			temp=i->link;
			i->link=NULL;
			free(temp);
		}
	
	}

}
void display()
{
	struct node * i;
	i=start;
	while(i!=NULL)
	{
		printf("%d \n",i->data);
		i=i->link;
	}
}
void count()
{
	
	int count = 0;
	struct node *i =NULL;
	i=start;
	while(i!=NULL)
	{
		count++;
		i=i->link;
	}
	printf("Count of Node: %d",count);
}
void insert_at_begin(int el)
{
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=el;
	temp->link=start;
	start=temp;
}  

