#include <stdio.h>
#include <stdlib.h>
struct Node
{
 struct Node *lchild;
 int data;
 struct Node *rchild;
};
struct Queue
{
 	int size;
 	int front;
 	int rear;
 	struct Node **Q;
};
void create(struct Queue *q,int size)
{
 		q->size=size;
 		q->front=q->rear=0;
 		q->Q=(struct Node **)malloc(q->size*sizeof(struct Node *));
}
void enqueue(struct Queue *q,struct Node *x)
{
 		if((q->rear+1)%q->size==q->front)
 			printf("Queue is Full");
 		else
 		{
 			q->rear=(q->rear+1)%q->size;
 			q->Q[q->rear]=x;
		}
}
struct Node * dequeue(struct Queue *q)
{
		 struct Node* x=NULL;
 
		 if(q->front==q->rear)
		 {
 			printf("Queue is Empty\n");
 		}
 		else
 		{
			 q->front=(q->front+1)%q->size;
			 x=q->Q[q->front];
		 }
 	return x;
 }
 int isEmpty(struct Queue q)
{
 	return q.front==q.rear;
}
struct Node *root=NULL;
void Treecreate()
{
 	struct Node *p,*t;
 	int x;
 	struct Queue q;
 	create(&q,100);
 
 	printf("Eneter root value ");
 	scanf("%d",&x);
 	root=(struct Node *)malloc(sizeof(struct Node));
 	root->data=x;
 	root->lchild=root->rchild=NULL;
 	enqueue(&q,root);
 
 	while(!isEmpty(q))
 	{
 		p=dequeue(&q);
 		printf("eneter left child of %d ",p->data);
 		scanf("%d",&x);
		 if(x!=-1)
 		{
 				t=(struct Node *)malloc(sizeof(struct Node));
 				t->data=x;
 				t->lchild=t->rchild=NULL;
 				p->lchild=t;
 				enqueue(&q,t);
		 }
		 printf("eneter right child of %d ",p->data);
 		scanf("%d",&x);
 		if(x!=-1)
 		{
 				t=(struct Node *)malloc(sizeof(struct Node));
 				t->data=x;
 				t->lchild=t->rchild=NULL;
 				p->rchild=t;
 				enqueue(&q,t);
 		}
	}
}
int count(struct Node *root)
{
 		if(root)
 			return count(root->lchild)+count(root->rchild)+1;
 		return 0;
}
int height(struct Node *root)
{
		 	int x=0,y=0;
 			if(root==0)
 				return 0;
 			x=height(root->lchild);
			 y=height(root->rchild);
 			if(x>y)
 				return x+1;
 			else
 				return y+1;
 
} 
int main()
{
 	Treecreate();
 	int k;
 	printf("count=%d\n",count(root)); 
 	k=height(root);
 	printf("height=%d",k-1); 
 	return 0;
}
