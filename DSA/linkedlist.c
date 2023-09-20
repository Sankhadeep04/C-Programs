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
void count();
void delete_at_begin();
void delete_at_any_pos(int );
void delete_at_end();
void delete_any_element(int );
void insert_after_ele(int ,int );
void duplicate();
void unique();
void insert_before_ele(int ,int);
void sort();
void search_of_el(int );
void new_sort();
struct node *start = NULL;
struct node *start2 = NULL;
int main()
{
	int a,pos,el;
	printf("enter 1 to insert element at first \n");
	printf("enter 2 to insert element at any position \n");
	printf("enter 3 to insert at last \n");
	printf("enter 4 to display \n");
	printf("enter 5 to delete the first element\n");
	printf("enter 6 to delete the last element\n");
	printf("enter 7 to delete the element at any position\n");
	printf("enter 8 to insert element after any element \n");
	printf("enter 9 to print duplicate elements \n");
	printf("enter 10 to print unique elements \n");
	printf("enter 11 to insert before any element \n");
	printf("12 for Count\n");
	printf("enter 13 to sort the linked list\n");
	printf("enter 14 to search element in the linked list\n");
	printf("enter 15 to sort the linked list(new way)\n");
	printf("enter 16 to delete any perticular element \n");


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
			case 8:
				printf("enter the element :");
				scanf("%d",&pos);
				printf("Enter the element to insert : ");
				scanf("%d",&el);
				insert_after_ele(pos,el);
				break;
			case 9:
				duplicate();
				break;
			case 10:
				unique();
				break;
			case 11:
				printf("enter the element to insert before :");
				scanf("%d",&pos);
				printf("Enter the new element to insert : ");
				scanf("%d",&el);
				insert_before_ele(pos,el);
				break;
			case 12:
				count();
				break;
			case 13:
				sort();
				display();
				break;
			case 14:
				printf("enter the element to search : ");
				scanf("%d",&el);
				search_of_el(el);
				break;
			case 15:
				new_sort();
				display();
				break;
			case 16:
				printf("enter the element to delete : ");
				scanf("%d",&el);
				delete_any_element(el);
				break;
			default :
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
void atany(int el,int pos)
{
	int i;
	if(pos<=0)
	{
		printf("not possible");
	}
	else if(pos==1)
	{
		atfirst(el);
	}
	else
	{
		int i = 1;
		struct node *temp, *t;
		t=start;
		while(pos-1>i)
		{
			t=t->link;
			i++;
		}
		temp->link=t->link;
		t->link=temp;
		
		while(i<pos-1 && t!=NULL)
		{
			t=t->link;
			i++;
		}
		if(t==NULL)
		{
			printf("invalid position");
		}
		else
		{
			temp->link = t->link;
			t->link = temp;
		}
	}
}
void delete_at_begin()
{
	struct node *temp;
	if(start==NULL)
	{
		printf("No List\n");
	}
	else
	{
	temp=start;
	start=start->link;
	free(temp);
	}
}
void delete_at_end()
{
	struct node *temp,*i,*t;
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
void delete_at_any_pos(int pos)
{
	if(pos==0)
		printf("invalid position");
	else if(pos==1)
		delete_at_end();
	else 
	{
		struct node  *temp,*t;
		temp = (struct node*)malloc(sizeof(struct node));
		int i=1;
		temp=start;
		while(i<pos-1 && temp!=NULL)
		{
			temp=temp->link;
			i++;
		}
		if(temp!=NULL)
		{
			printf("Invalid position");
		}
		else
		{
			t=temp->link;
			temp->link=t->link;
			free(t);
		}
	}
}
void delete_any_element(int el)
{
	struct node  *temp,*t;
	temp = (struct node*)malloc(sizeof(struct node));
	temp = start;
	
	if(start->data==el)
	{
		delete_at_begin();
	}
	else
	{
		while(temp->link!=NULL)
		{
			if(temp->link->data == el)
			{
				break;
			}
		}
		t=temp->link;
		temp->link =temp->link->link;
		free(t);
	}
}
void duplicate()
{
	int i=0;
	struct node *temp,*s,*j;
	temp = (struct node*)malloc(sizeof(struct node));
	s=start;
	j=s->link;
	while(s!=NULL)
	{
		if(s->data==j->data)
		{
			printf("\nduplicate element is : %d",s->data);
			i++;
		}
		j=j->link;
	}
	s=s->link;
	if(i==0)
	{
		printf("No duplicate element found");
	}
}
void unique()
{
	int ctr ,flag=0;
	
	struct node *temp,*i,*j;
	temp = (struct node*)malloc(sizeof(struct node));
	
	for(i=start;i->link!=NULL;i=i->link)
	{
		ctr=0;
		for(j=start;j->link!=NULL;j=j->link)
		{
			if(i->data==j->data)
			{
				flag=1;
				ctr++;
			}
			
		}
		if(ctr==1)
		{
			printf("unique element found : %d\n",i->data);
		}
	}
	if(flag==0)
	{
		printf("No unique element found");
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
void frequency()
{
	int ctr;
	struct node *temp,*j,*s	;
	temp = (struct node*)malloc(sizeof(struct node));
	s=start;
	j = s->link; 
	while(s!=NULL)
	{
		ctr = 1;
		if(s->data==j->data)
		{
			ctr++;
			
		}
		j=j->link;
	}
}
void insert_after_ele(int pos,int el)
{
	struct node *temp,*s,*m;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data=el;
	s=start;
	while(s!=NULL)
	{
		if(s->data==pos)
		{
			m=s->link;
			s->link=temp;
			temp->link=m;
		}
		s=s->link;
	}
}
void insert_before_ele(int pos,int el)
{
	struct node *temp,*t;
	t=(struct node*)malloc(sizeof(struct node));
	temp=start;
	if(pos==temp->data)
	{
		atfirst(el);
	}
	else
	{
		while(temp->link!=NULL)
		{
			if(temp->link->data==pos)
			{
				t->data=el;
				t->link=temp->link;
				temp->link=t;
				break;
			}
			temp=temp->link;
		}
		
	}
}
void search_of_el(int el)
{
	struct node *temp,*p,*q;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=el;
	p=start;
	while(p!=NULL)
	{
		if(p->data==temp->data)
		{
			printf("element founded\n");
			
		}
		else
		{
			printf("element not founded\n");
		}
		p=p->link;
	}
}
void new_sort()
{
	struct node *new,*temp,*temp2;
	if(start!=NULL)
	{
		new=(struct node*)malloc(sizeof(struct node));
		start2=new;
		new->data=start->data;
		new->link=NULL;
	}
	temp=start->link;
	while(temp!=NULL)
	{
		temp2=start2;
		if(temp2->link==NULL)
		{
			if(temp->data<temp2->data)
			{
				new=(struct node*)malloc(sizeof(struct node));
				new->data=temp->data;
				new->link=start2;
				start2=new;
			}
			else
			{
				new=(struct node*)malloc(sizeof(struct node));
				new->data=temp->data;
				new->link=NULL;
				temp2->link=new;
			}
		}
		else if(temp->data<start2->data)
		{
			new=(struct node*)malloc(sizeof(struct node));
			new->data = temp->data;
			new->link = start2;
			start2 = new;
		}
		else
		{
			while(temp2->link != NULL && temp->data > temp2->link->data)
			{
				temp2=temp2->link;
			}
				new=(struct node*)malloc(sizeof(struct node));
				new->data=temp->data;
				new->link = temp2->data;
				temp2->link=new;	
		}
		temp=temp->link;
	}
}



