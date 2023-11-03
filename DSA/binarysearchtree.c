#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
struct node *root=NULL;
struct node *insert(struct node *tree,int el);
struct node *bst_search(struct node *p,int key);
struct node	*bst_search_iterative(struct node *root,int key);
int count = 1;
int main()
{
	int ch,el,pos,key;
	printf("Enter 1 to insert a node in the binary search tree \n\n");
	printf("Enter 2 to perform bst search\n\n");
	printf("Enter 3 to perform iterative bst search\n\n");
	printf("Enter 4 to search ceiling of a node \n");
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
				struct node* n=bst_search(root,el);
				if(n!=NULL)
				{
					printf("Found:%d\n",n->data);
				}
				else
				{
					printf("Element not found.\n");
				}
				break;
			case 3:
				printf("Enter an element :\n");
				scanf("%d",&el);
				struct node* m=bst_search_iterative(root,el);
				if(m!=NULL)
				{
					printf("Found:%d\n",m->data);
				}
				else
				{
					printf("Element not found.\n");
				}
				break;
			default:
				printf("Invalid Choice\n");
		}
	}
} 
struct node *insert(struct node *tree,int el)
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
		if (el < root->data)
        	root->left  = insert(root->left, el);
   		else if (el > root->data)
        	root->right = insert(root->right, el);
	}
	return(root);
}
struct node *bst_search(struct node *root,int key)
{
		if(root==NULL || root->data==key)
		{
			return root;
		}
		else if(key<root->data)
		{
			bst_search(root->left,key);
		}
		else 
		{
			bst_search(root->right,key);
		}
		
}
struct node *bst_search_iterative(struct node *root,int key)
{
	while(root!=NULL)
	{
		if(key<root->data)
		{
			root=root->left;
		}
		else if(key>root->data)
		{
			root=root->right;
		}
		else 
		{
			return root;
		}
	}
	return root;
}

