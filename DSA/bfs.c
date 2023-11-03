#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
struct node *root=NULL;
struct node *insert(struct node *tree,long el);
int ciel(struct node *tree,int key);
int count = 1;
int main()
{
	int ch,el,pos;
	printf("Enter 1 to insert a node in the binary search tree \n\n");
	printf("Enter 2 to find the ciel of a element in bst\n\n");
	while(1)
	{
		printf("Enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter an element : To quit enter 0 :\n");
				scanf("%d",&el);
				while(el!=0)
				{
					root=insert(root,el);
					scanf("%d",&el);
				}
				break;
			case 2:
				printf("Enter an element :\n");
				scanf("%d",&el);
				int n=ciel(root,el);
				printf("Ceil of the element is:%d\n",n);
				break;
			default:
				printf("Invalid Choice\n");
		}
	}
} 
struct node *insert(struct node *tree,long el)
{
	if(tree==NULL)
	{
		tree=(struct node *)malloc(sizeof(struct node));
		tree->left=tree->right=NULL;
		tree->data=el;
		count++;
	}
	else
	{
		if(count%2==0)
		{
			tree->left=insert(tree->left,el);
		}
		else
		{
			tree->right=insert(tree->right,el);
		}
	}
	return(tree);
}

int ciel(struct node *root,int key)
{
	int c=-1;
	while(root!=NULL)
	{
		if(root->data==key)
		{
			return key;
		}
		if(root->data>key)
		{
			c=root->data;
			root=root->left;
		}
		else
		{
			root=root->right;
		}
	}
}
