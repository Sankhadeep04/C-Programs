#include<stdio.h>
#include<stdlib.h>
#define MAX 50
struct node* queue[MAX];
int start=-1,end=-1,s,i;
struct node *insert(struct node*,int);
void preorder(struct node*);
void inorder(struct node*);
struct node *bfs(struct node *tree);
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
struct node *root=NULL;
struct node *node=NULL;
int count = 1;

int main()
{
	int ch,el,pos;
	printf("Enter 1 to insert a node in the binary tree \n\n");
	printf("Enter 2 to display the bfs of the binary tree\n\n");
	printf("Enter 3 to display the preorder traversal of the binary tree\n\n");
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
					root = insert(root,el);
					scanf("%d",&el);
				}
				break;
			case 2:
				bfs(root);
				break;
			case 3:
				printf("Preorder -> \n");
				preorder(root);
				printf("In order -> \n");
				inorder(root);
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
		if(count%2==0)
		{
			tree->left=insert(tree->left,el);
		}
		else
		{
			tree->right=insert(tree->right,el);
		}
	}
	return tree;
}

void preorder(struct node *tree)
{
	if(tree!=NULL)
	{
		
		printf("%d\n",tree->data);
		preorder(tree->left);
		preorder(tree->right);
		
	}
}

void inorder(struct node *tree)
{
	if(tree!=NULL)
	{
		
		inorder(tree->left);
		printf("%d\n",tree->data);
		inorder(tree->right);
	}
}
 
void q_insert(struct node *e)
{
	if(end == MAX-1)
	{
		printf("Overflow \n");

	}
	else{
		if(start==-1)
		{
			start++;
		}
		end++;
		queue[end]=e;
		
	}
}
void q_delete()
{
	if(start==-1 || start>end)
	{
		printf("\nUnderflow");
	}
	else{
		start++;
	}
	
	if(start > end)
	{
		start = end = -1;
	}
}
struct node *bfs(struct node *tree)
{
	if(root!=NULL)  
	{
		q_insert(root);
		
	}
	while(q_size()!=0)
	{
		s = q_size();
		for(i=0;i<s;i++)
		{
			node = queue[start];
			
			if(node->left!=NULL)
			{
				q_insert(node->left);
			}
			if(node->right!=NULL)
			{
				q_insert(node->right);
			}
			printf("%d\t",node->data);
			q_delete();
		}
		printf("\n");
	}
}
int q_size()
{
	return end - start + 1;
}
