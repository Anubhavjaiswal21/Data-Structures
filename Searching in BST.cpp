#include<stdio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
struct node *createnode(int value)
{
	struct node *n;
	n=(struct node*)malloc(sizeof(struct node));
	n->data=value;
	n->left=NULL;
	n->right=NULL;
	return n;
}
void inOrder(struct node *root)
{
	if(root!=NULL)
	{
		inOrder(root->left);
		printf("%d",root->data);
		inOrder(root->right);
	}
}
struct node *search(struct node *root,int key)
{
	if(root==NULL)
	return 0;
	if(root->data==key)
	{
		return root;
	}
	else if(root->data<key)
	{
		return search(root->right,key);	
	}
	else
	{
	  return search(root->left,key);	
	}

}
int main()
{
	int key;
	struct node *p=createnode(8);
	struct node *p1=createnode(4);
	struct node *p2=createnode(9);
	struct node *p3=createnode(2);
	struct node *p4=createnode(5);
	
	p->left=p1;
	p->right=p2;
	p1->left=p3;
	p1->right=p4;
	inOrder(p);
	printf("\nEnter the element to search:");
	scanf("%d",&key);
	struct node *a=search(p,key);
	if(a!=NULL)
	{
		printf("FOUND :%d",a->data);
	}
	else
	{
		printf("NOT FOUND");
	}

}
