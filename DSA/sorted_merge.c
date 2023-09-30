#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
void atfirst(int);
void atany(int , int);
void atlast(int);
void display();
void display_sec();
void atfirst_sec(int);
void atany_sec(int , int);
void atlast_sec(int);
void merge();
void sort();
void display_unique();
struct node *start = NULL;
struct node *start2 = NULL;
int main()
{
	int a,pos,el;
	printf("enter 1 to insert element at first in first linkedlist \n");
	printf("enter 2 to insert element at any position in first linkedlist\n");
	printf("enter 3 to insert at last in first linkedlist\n");
	printf("enter 4 to display \n");
	printf("enter 5 to display second linkedlist \n");
	printf("enter 6 to insert element at first in second linkedlist \n");
	printf("enter 7 to insert element at any position in second linkedlist\n");
	printf("enter 8 to insert at last in second linkedlist\n");
	printf("Enter 9 to merge two linkedlist\n");
	printf("enter 10 to merge two linked list and print \n");
	printf("Enter 1 to sort both linked list \n");
	while(1)
	{
		printf("\nchoose a number : ");
		scanf("%d",&a);
		switch(a)
		{
			case 1:
				printf("Enter the element : ");
				scanf("%d",&el);
				atfirst(el);		
				break;
			case 2:
				printf("Enter the element : ");
				scanf("%d",&el);
				printf("Enter the position : ");
				scanf("%d",&pos);
				atany(el,pos);
				break;
			case 3:
				printf("Enter the element : ");
				scanf("%d",&el);
				atlast(el);	
				break;
			case 4:
				display();
				break;
			case 5:
				display_sec();
				break;
			case 6:
				printf("Enter the element : ");
				scanf("%d",&el);
				atfirst_sec(el);		
				break;
			case 7:
				printf("Enter the element : ");
				scanf("%d",&el);
				printf("Enter the position : ");
				scanf("%d",&pos);
				atany_sec(el,pos);
				break;
			case 8:
				printf("Enter the element : ");
				scanf("%d",&el);
				atlast_sec(el);	
				break;
			case 9:
				merge();
				break;
			case 10 :
				merge();
				sort();
				display_unique();
				break;
			case 11 :
				sort();
				break;
			default:
				printf("invalid choice \n");
		}
	}
}
void atfirst(int el)
{
	struct node *temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data=el;
	temp->link=start;
	start=temp;
}
void atlast(int el)
{
	struct node *temp,*i;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data=el;
	temp->link=NULL;
	i=start;
	while(i->link!=NULL)
	{
		i=i->link;
	}
	i->link=temp;
}

void atany(int el,int pos)
{
	if(pos<=0)
		printf("Not possible\n");
	else if(pos==1)
		atfirst(el);
	else
	{
		int i=1;
		struct node *temp,*t;
		t=start;
		temp=(struct node*)malloc(sizeof(struct node));
		temp->data=el;
		while(i<pos-1 && t !=NULL)
		{
			t=t->link;
			i++;
		}
		
		if(t==NULL)
			printf("Invalid position.");
		else
		{
			temp->link=t->link;
			t->link=temp;
		}
	}
}
void display()
{
	struct node * i;
	i=start;
	while(i!=NULL)
	{
		printf("%d ->",i->data);
		i=i->link;
	}
	printf("NULL\n");
}
void display_sec()
{
	struct node *j;
	j=start2;
	while(j!=NULL)
	{
		printf("%d ->",j->data);
		j=j->link;
	}
	printf("NULL\n");
}
void atfirst_sec(int el)
{
	struct node *temp2;
	temp2 = (struct node*)malloc(sizeof(struct node));
	temp2->data=el;
	temp2->link=start2;
	start2=temp2;
}
void atlast_sec(int el)
{
	struct node *temp2,*i;
	temp2 = (struct node*)malloc(sizeof(struct node));
	temp2->data=el;
	temp2->link=NULL;
	i=start2;
	while(i->link!=NULL)
	{
		i=i->link;
	}
	i->link=temp2;
}
void atany_sec(int el,int pos)
{
	if(pos<=0)
		printf("Not possible\n");
	else if(pos==1)
		atfirst_sec(el);
	else
	{
		int i=1;
		struct node *temp2,*t;
		t=start2;
		temp2=(struct node*)malloc(sizeof(struct node));
		temp2->data=el;
		while(i<pos-1 && t !=NULL)
		{
			t=t->link;
			i++;
		}
		
		if(t==NULL)
			printf("Invalid position.");
		else
		{
			temp2->link=t->link;
			t->link=temp2;
		}
	}
}
void merge()
{
	struct node *j,*i,*temp;
	temp = (struct node*)malloc(sizeof(struct node));
	for(i=start;i!=NULL;i=i->link)
	{
		if(i->link==NULL)
		{
			i->link=start2;
			break;
		}
	}
	
}
void display_unique()
{
	
	struct node *i,*j,*k;
	i=start;
	while(i->link != NULL)
	{
		j=i->link;
		if(i->data < j->data)
		{
			printf("%d ->",i->data);
			i=i->link;			
		}
		else if(i->data == j->data)
		{
			printf("%d ->",i->data);
			i=i->link->link;
		}
	}
	if(i->link==NULL)
	{
		printf("%d ->",i->data);
		printf("NULL");
	}
}
void sort()
{
	struct node *i,*j;
	int temp;
	
	for(i=start;i->link!=NULL;i=i->link)
	{
		for(j=i->link;j!=NULL;j=j->link)
		{
			if(i->data > j->data)
			{
				temp=i->data;
				i->data = j->data;
				j->data=temp;
			}
		}
	}
}

