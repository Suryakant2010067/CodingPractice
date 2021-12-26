#include <stdio.h>
#include <stdlib.h>
struct Node
{
 	struct Node *lchild;
 	int data;
 	struct Node *rchild;
 	int height;
};
struct Node*root=NULL;
/*struct Node*NodeHeight(struct Node *p)
{
 	struct Node*hl,*hr;
 	hl=p && p->lchild?p->lchild->height:0;
 	hr=p && p->rchild?p->rchild->height:0;
 
 	return hl>hr?hl+1:hr+1;
}*/
int height(struct Node *p)
{
    if (p == NULL)
        return 0;
    return p->height;
}
struct Node* newNode(int key)
{
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->key= key;
    node->lchild  = NULL;
    node->rchild= NULL;
    node->height = 1; 
    return(node);
}
struct Node *rightRotate(struct Node *y)
{
    struct Node *x = y->lchild;
    struct Node *T2 = x->rchild;
    x->rchild = y;
    y->lchild = T2;
    y->height = max(height(y->lchild), height(y->rchild))+1;
    x->height = max(height(x->lchild), height(x->rchild))+1;
 
    return x;
}
struct Node *leftRotate(struct Node *x)
{
    struct Node *y = x->rchild;
    struct Node *T2 = y->lchild;
    y->lchild = x;
    x->rchild= T2;
    x->height = max(height(x->lchild), height(x->rchild))+1;
    y->height = max(height(y->lchild), height(y->rchild))+1;
    return y;
}
int BalanceFactor(struct Node *p)
{
    if (p == NULL)
        return 0;
    return height(p->lchild)-height(p->rchild);
}
struct Node * LLRotation(struct Node *p)
{
 	struct Node *pl=p->lchild;
 	struct Node *plr=pl->rchild;
 
 	pl->rchild=p;
	 p->lchild=plr;
	 p->height=height(p);
 	pl->height=height(pl);
 
 	if(root==p)
 	root=pl;
 	return pl;
}
struct Node * LRRotation(struct Node *p)
{
 	struct Node *pl=p->lchild;
 	struct Node *plr=pl->rchild;
 
 	pl->rchild=plr->lchild;
	 p->lchild=plr->rchild;
 
 	plr->lchild=pl;
 	plr->rchild=p;
 
 	pl->height=height(pl);
 	p->height=height(p);
	 plr->height=height(plr);
 
	 if(root==p)
 		root=plr;
 		return plr;
}
struct Node * RRRotation(struct Node *p)
{
 	return NULL;
}
struct Node * RLRotation(struct Node *p)
{
	 return NULL;
}
struct Node* Insert(struct Node* node, int key)
{
    if (node == NULL)
        return(newNode(key));
 
    if (key < node->key)
        node->lchild= insert(node->lchild, key);
    else if (key > node->key)
        node->rchild = insert(node->rchild, key);
    else 
        return node;

    node->height = 1 + max(height(node->lchild),height(node->rchild));
    int balance =  BalanceFactor(node);
    if (balance > 1 && key < node->lchild->key)
        return rightRotate(node);

    if (balance < -1 && key > node->rchild->key)
        return leftRotate(node);
    if (balance > 1 && key > node->lchild->key)
    {
        node->lchild =  leftRotate(node->lchild);
        return rightRotate(node);
    }
    if (balance < -1 && key < node->rchild->key)
    {
        node->rchild = rightRotate(node->rchild);
        return leftRotate(node);
    }
    return node;
}
void Inorder(struct Node *p)
{
 	if(p)
 	{
		 Inorder(p->lchild);
 		printf("%d ",p->data);
 		Inorder(p->rchild);
	 }
}
void preorder(struct Node*p)
{
	if(p)
	{
		printf("%d ",p->data);
		preorder(p->lchild);
		preorder(p->rchild);
	}
}
void postorder(struct Node*p)
{
	if(p)
	{
		postorder(p->lchild);
		postorder(p->rchild);
		printf("%d ",p->data);
	}
}
int Height(struct Node *p)
{
 	int x,y;
 	if(p==NULL)return 0;
 		x=Height(p->lchild);
 		y=Height(p->rchild);
 	return x>y?x+1:y+1;
}
struct Node *InPre(struct Node *p)
{
 	while(p && p->rchild!=NULL)
 		p=p->rchild;
 
 return p;
}
struct Node *InSucc(struct Node *p)
{
	 while(p && p->lchild!=NULL)
 			p=p->lchild;
 
 	return p;
}
int main()
{
 	struct Node *temp;
 	int choice,value;
 	do
 	{
 		printf("\nenter the choice\n");
 		scanf("%d",&choice);
 		switch(choice)
 		{
 			case 1:
 				{
 					printf("insert the value\n");
 					scanf("%d",&value);
 					Insert(root,value);
 					break;
				 }
			case 2:
				{
					printf("inorder=");
 					Inorder(root);
 					break;
				
				}
			case 3:
				{
					printf("\n");
 					printf("preorder=");
 					preorder(root);
 					break;
				 }
			case 4:
				{
					printf("\n");
 					printf("postorder=");
 					postorder(root);
 					break;
				}
			case 5:
			{
				exit(0);
					}		
			default:
			{
				printf("invalid choice");
			}		 		 
		 }
	 }while(choice!=0);
}

