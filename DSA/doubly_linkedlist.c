#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;	
	struct node *next;
	struct node *prev;
};
void insert_at_begin(int );
void insert_at_end(int );
void insert_at_any(int ,int);
void display();
int count();
void delete_at_begin();
void delete_at_any_pos(int );
void delete_at_end();
struct node *start = NULL;
struct node *start2 = NULL;
struct node *end;
int main()	
{
	int a,pos,el;
	printf("enter 1 to insert element at first \n");
	printf("enter 2 to insert element at any position \n");
	printf("enter 3 to insert at last \n");
	printf("enter 4 to display doubly linked list \n");
	printf("enter 5 to delete the first element\n");
	printf("enter 6 to delete the last element\n");
	printf("enter 7 to delete the element at any position\n");
	
	while(1)
	{
		printf("\nchoose a number : ");
		scanf("%d",&a);
		switch(a)
		{
			case 1:
				printf("Enter the element : ");
				scanf("%d",&el);
				insert_at_begin(el);		
				break;
			case 2:
				printf("Enter the element : ");
				scanf("%d",&el);
				printf("Enter the position : ");
				scanf("%d",&pos);
				insert_at_any(el,pos);
				break;
			case 3:
				printf("Enter the element : ");
				scanf("%d",&el);
				insert_at_end(el);	
				break;
			case 4:
				display();
				break;
			case 5:
				delete_at_begin();
				break;
			case 6:
				delete_at_end();
				break;
			case 7:
				printf("Enter any Position :");
				scanf("%d",&pos);
				delete_at_any_pos(pos);
				break;
			default :
				printf("invalid choice");
			
		}
	}
}
void insert_at_begin(int el)
{
	struct node *new;
	new = (struct node*)malloc(sizeof(struct node));
	new->data = el;
	new->prev = NULL;
	new->next = start;
	start = new;
	if(new->next != NULL)
	{
		new->next->prev = new;
	}
}
void insert_at_end(int el)
{
	struct node *new,*temp;
	new = (struct node*)malloc(sizeof(struct node));
	temp = start;
	new->data = el;
	new->next = NULL;
	while(temp->next != NULL)
	{
		temp=temp->next;
	}
	new->prev = temp;
	temp->next = new;
}
void display()
{
	struct node *i;
	i=start;
	
	while( i != NULL)
	{
		printf("%d ->",i->data);
		i=i->next;
	}
	printf("NULL\n");
}

void insert_at_any(int el , int pos)
{
	if(pos<=0)
		printf("Not possible\n");
	else if(pos==1)
		insert_at_begin(el);
	else
	{
		int i = 1;
		struct node *new,*temp,*t;
		temp = start;
		t = start;
		new = (struct node*)malloc(sizeof(struct node));
		new->data = el;
		while(i < pos-1 && t != NULL)
		{
			temp = temp->next;
			t = t->next;
			i++;
		}
		if(t == NULL)
		{
			printf("invalid position");
		}
		else
		{
			new->prev = temp;
			new->next = temp->next;
			temp->next = new;
			new->next->prev = new;		
		}
	}
}
void delete_at_begin()
{	

	struct node *temp;
	if(start == NULL)
	{
		printf("list is empty");
	}
	else
	{
		temp = start;
		start = start->next;
		start->prev = NULL;
		free(temp);
	}
}
void delete_at_end()
{
	struct node *temp,*i,*t;
	if(start->next==NULL)
	{
			t=start;
			start=NULL;
			free(t);	
	}
	else
	{
		i = start;
		while(i->next->next != NULL)
		{
			i=i->next;
		}
		temp = i->next;
		i->next=NULL;
		free(temp);
	}
}
void delete_at_any_pos(int pos)
{
	if(pos==0)
		printf("invalid position");
	else if(pos==1)
		delete_at_begin();
	else 
	{
		struct node  *temp,*t,*l;
		temp = (struct node*)malloc(sizeof(struct node));
		int i=1;
		l = start;	
		temp=start;
		while(i<pos-1 && l!=NULL)
		{
			temp=temp->next;
			l = l->next;
			i++;
		}
		if(l==NULL)
		{
			printf("Invalid position");
		}
		else
		{
			t = temp->next;
			temp->next = t->next;
			t->next->prev = temp;
			free(t);
		}
	}
}
int count()
{
	int count = 0;
	struct node *i =NULL;
	i=start;
	while(i!=NULL)
	{
		count++;
		i=i->next;
	}
	return count;
}
