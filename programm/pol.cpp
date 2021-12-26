#include<stdio.h>
#include<stdlib.h>
i
struct node
{
	int pow;
	int coeff;
	struct node *next;
	
}
void polyadd(struct node*poly1,struct node*poly2,struct node*poly)
{
	while(poly1->pow&&poly2->pow)
	{
	
			if(poly1->pow>poly2->pow)
			{
				poly->pow=poly1->pow;
				poly->coeff=poly2->coeff;
				poly1=poly1->next;
			}
			else if(poly1->pow<poly2->pow)
			{
				poly->pow=poly1->pow;
				poly->coeff=poly1->coeff;
				p0ly2=poly2->next;
			}
			else
			{
				poly->pow=poly1->pow;
				poly->coeff=poly1->coeff+poly2->coeff;
				poly1=poly1->next;
				poly2=poly2->next;
			}
	}
	while(poly1->pow||poly2->pow)
	{
		if(poly1->next)
		{
				poly->pow=poly1->pow;
				poly->coeff=poly2->coeff;
				poly1=poly1->next;
		}
		else if(poly2->pow){
		

				poly->pow=poly1->pow;
				poly->coeff=poly1->coeff;
				p0ly2=poly2->next;
			}
	}
}
