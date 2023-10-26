#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;	
	struct node *next;
};
void insert_at_begin(int );
void insert_at_end(int );
void insert_at_any(int ,int);
void display();
void delete_at_begin();
void delete_at_any_pos(int );
void delete_at_end();
struct node *start = NULL;
struct node *tail = NULL;
int main()	
{
	int a,pos,el;
	printf("enter 1 to insert element at first \n");
	printf("enter 2 to insert element at any position \n");
	printf("enter 3 to insert at last \n");
	printf("enter 4 to display circular linked list \n");
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
			defaul:
				printf("Invalid choice ");
		}
	}
}
void insert_at_begin(int el)
{
	struct node *new;
	new = (struct node*)malloc(sizeof(struct node));
	new->data = el;
	if(tail == NULL)
	{
		tail = new;
		tail->next = new;
	}
	else
	{
		new->next = tail->next;
		tail->next = new;
	}
	
}
void insert_at_end(int el)
{
	struct node *new,*temp;
	new = (struct node*)malloc(sizeof(struct node));
	new->data = el;
	if(tail == NULL)
	{
		tail = new;
		tail->next = new;
	}
	else
	{
		new->next = tail->next;
		tail->next = new;
		tail = new;
	}
}
void display()
{
	struct node *temp;
	temp = tail->next;
	while(temp->next != tail->next)
	{
		printf("%d ->",temp->data);
		temp = temp->next;
	}
	printf("%d ",temp->data);
}
void insert_at_any(int el , int pos)
{
	if(pos<=0 )
		printf("Not possible\n");
	else if(pos==1)
		insert_at_begin(el);
	else
	{
		int i = 1;
		struct node *new,*temp,*t;
		t = tail->next;
		temp = tail->next;
		new = (struct node*)malloc(sizeof(struct node));
		new->data = el;
		temp = tail->next;
		while(i<pos-1 && temp!=tail)
		{
			temp = temp->next;
			i++;
		}
		if(temp == tail)
		{
			printf("invalid position");
		}
		else
		{
			new->next = temp->next;
			temp->next = new;	
		}
			
	}
}
void delete_at_begin()
{
	struct node *temp;
	temp = tail->next;
	if(tail == NULL)
	{
		printf("List is empt");
	}
	else if(temp->next == temp)
	{
		tail = NULL;
		free(temp);
	}
	else
	{
		tail->next = temp->next;
		free(temp);
	}
}
void delete_at_end()
{
	struct node *temp,*t;
	temp = tail->next;
	if(tail == NULL)
	{
		printf("List is empty");
	}
	else if(temp->next == temp)
	{
		tail = NULL;
		free(temp);
	}
	else
	{
		while(temp->next != tail->next)
		{
			t = temp;
			temp = temp->next;
		}
		t->next = tail->next;
		tail = t;
		free(temp);
	}
}
void delete_at_any_pos(int pos)
{
	struct node  *temp,*t;
	temp = tail->next;
	if(pos==0)
		printf("invalid position");
	else if(pos==1)
		delete_at_begin();
	else 
	{
		int i=1;
		while(i<pos-1 && temp != tail )
		{
			temp = temp->next;
			i++;
		}
		if (temp == tail)
		{
			printf("invalid position");
		}
		else
		{
			t = temp->next;
			temp->next = t->next;
			free(t);	
		}
		
	}
}
