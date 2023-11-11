#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *new=NULL;
struct node *root = NULL;
struct node* createNode(int data);
struct node* insert(struct node *tree, int el);
int floor(struct node *tree, int key);
int main()
{
    int ch, el, result;
    printf("Enter 1 to insert a node in the binary search tree\n");
    printf("Enter 2 to find the floor of an element in BST\n");
    while (1)
    {
        printf("Enter your choice: ");
        scanf("%d", &ch);
        
        switch (ch)
        {
            case 1:
                printf("Enter an element: To quit enter 0:\n");
                scanf("%d", &el);
                while (el != 0)
                {
                    root = insert(root, el);
                    scanf("%d", &el);
                }
                break;
            case 2:
                printf("Enter an element: ");
                scanf("%d", &el);
                result = floor(root, el);
                if (result != -1)
                    printf("Floor of the element is: %d\n", result);
                else
                    printf("No floor found for the element.\n");
                break;
                
            default:
                printf("Invalid Choice\n");
        }
    }
}

struct node* createNode(int data)
{
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

struct node* insert(struct node *root, int data)
{
    if (root == NULL)
    {
        return createNode(data);
    }

    if (data < root->data)
    {
        root->left = insert(root->left, data);
    }
    else if (data > root->data)
    {
        root->right = insert(root->right, data);
    }
    return root;
}

int floor(struct node *root, int key)
{
    int f = -1;
    while (root != NULL)
    {
        if (root->data == key)
        {
            return key;
        }
        if (root->data < key)
        {
            f = root->data;
            root = root->right;
        }
        else
        {
            root = root->left;
        }
    }
    return f;
}
