#include<stdio.h>
#include<stdlib.h>
struct node
{
	float coef;
	int ex;
	struct node *link;
};
struct node *start1,*start2,*start3;
void create_node(struct node *s,int e,float c)
{
	struct node *temp,*new;
	new=(struct node*)malloc(sizeof(struct node));
	temp->coef=c;
	temp->ex=e;
	temp=s;
	while(temp->link!=NULL)
	{
		temp=temp->link;
	}
	temp->link=new;
	new->link=NULL;
	new->coef=c;
	new->ex;
}
void polynomialAddition()
{
	struct node *t1,*t2;
	t1=start1;
	t2=start2;
	while(t1!=NULL && t2!=NULL)
	{
		if(t1->ex==t2->ex)
		{
			create_node(start3,t1->ex,t1->coef+t2->coef);
			t1=t1->link;
			t2=t2->link;
		}
		else if(t1->ex>t2->ex)
		{
			create_node(start3,t1->ex,t1->coef);
			t1=t1->link;
		}
		else
		{
			create_node(start3,t2->ex,t2->coef);
			t2=t2->link;
		}
	}
	while(t1!=NULL)
	{
		create_node(start3,t1->ex,t1->coef);
		t1=t1->link;
	}
	while(t2!=NULL)
	{
		create_node(start3,t2->ex,t2->coef);
		t2=t2->link;
	}
	
}
void display()
{
	struct node *t;
	t=start3;
	while(t!=NULL)
	{
		printf("+");
		printf("%dx%d",t->coef,t->ex);
	}
	printf(" = 0");
}
int main()
{
	int ex,ch;
	float coef;

	printf("Enter 1 to create the 1st\n");
	printf("Enter 2 to create the 1st\n");
	
	printf("Enter 3 for addion of the polynomial\n");
	printf("Enter 4 to display the equation\n");
	while(1)
	{
		printf("Enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter exponent value");
				scanf("%d",&ex);
				printf("Enter coefficient value");
				scanf("%f",&coef);
				create_node(start1,ex,coef);
				break;
			case 2:
				printf("Enter exponent value");
				scanf("%d",&ex);
				printf("Enter coefficient value");
				scanf("%f",&coef);
				create_node(start2,ex,coef);
				break;
			case 3:
				polynomialAddition();
				break;
			case 4:
				display();
				break;
			default:
				printf("invalid choice\n");
				
		}
	}
}
