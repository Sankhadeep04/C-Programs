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
struct node *tail = NULL;
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
	start = tail->next;
	new = (struct node*)malloc(sizeof(struct node));
	new->data = el;

	if(start == NULL)
	{
		start = tail = new;
		new->next = start;
		new->prev = tail;
	}
	else
	{
		new->prev = tail;
		new->next = start;
		start->prev = new;
		tail->next = new;
		start = new;
	}
	
}
void insert_at_end(int el)
{
	struct node *new;
	start = tail->next;
	new = (struct node*)malloc(sizeof(struct node));
	new->data = el;

	if(start == NULL)
	{
		start = tail = new;
		new->next = start;
		new->prev = tail;
	}
	else
	{
		new->prev = tail;
		tail->next = new;
		new->next = start;
		start->prev = new;
		tail = new;
	}
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
			temp->next->prev = new;
			temp->next = new;
		}
	}
}
void display()
{
	struct node *temp;
	temp = start;
	if(start == NULL)
	{
		printf("list is empty");
	}
	else
	{
		while(temp != tail)
		{
			printf("%d ->",temp->data);
			temp = temp->next;
		}
		printf("%d",temp->data);
	}
}
