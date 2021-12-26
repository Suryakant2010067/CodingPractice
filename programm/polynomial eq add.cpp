#include<stdio.h>
#include<stdlib.h>
struct Node{
   int coeff;
   int pow;
   struct Node *next;
};
void create_node(int x, int y, struct Node **temp){
   struct Node *newnode, *head;
   head = *temp;
   if(head == NULL){
      newnode=(struct Node*)malloc(sizeof(struct Node));
      newnode->coeff = x;
      newnode->pow = y;
      *temp = head;
      newnode->next = (struct Node*)malloc(sizeof(struct Node));
      newnode=newnode->next;
      newnode->next = NULL;
   }
    else {
      newnode->coeff = x;
      newnode->pow = y;
      newnode->next = (struct Node*)malloc(sizeof(struct Node));
      newnode = newnode->next;
      newnode->next = NULL;
   }
}
void polyadd(struct Node *p1, struct Node *p2, struct Node *result,struct Node*node){
   while(p1->next && p2->next){
      if(p1->pow > p2->pow){
         result->pow = p1->pow;
         result->coeff = p1->coeff;
         p1 = p1->next;
      }
      else if(p1->pow < p2->pow){
         result->pow = p2->pow;
         result->coeff = p2->coeff;
         p2 = p2->next;
      } else {
         result->pow = p1->pow;
         result->coeff = p1->coeff+p2->coeff;
         p1 = p1->next;
         p2 = p2->next;
      }
      result->next = (struct Node *)malloc(sizeof(struct Node));
      result = result->next;
      result->next = NULL;
   }
   while(p1->next || p2->next){
      if(p1->next){
         result->pow = p1->pow;
         result->coeff = p1->coeff;
         p1 = p1->next;
      }
      if(p2->next){
         result->pow = p2->pow;
         result->coeff = p2->coeff;
         p2 = p2->next;
      }
      result->next = (struct Node *)malloc(sizeof(struct Node));
      result = result->next;
      result->next = NULL;
   }
}
void printpoly(struct node*k)
{
   
   while(k!=0)
   {
      printf("%dx^%d", k->coeff, k->pow);
      node = k->next;
      if(k->next !=0)
      {
	  
         printf(" + ");
     }
   }
}
int main(){
   struct Node *p1 = NULL, *p2 = NULL, *result = NULL;
   create_node(41,7,&p1);
   create_node(12,5,&p1);
   create_node(65,0,&p1);
   create_node(21,5,&p2);
   create_node(15,2,&p2);
   printf("polynomial 1: ");
 	printpoly(p1);
   printf("\npolynomial 2: ");
 	printpoly(p2);
   result = (struct Node *)malloc(sizeof(struct Node));
   polyadd(p1, p2, result,node);
   printf("\npolynomial after adding p1 and p2 : ");
   printpoly(result);
   return 0;
}
