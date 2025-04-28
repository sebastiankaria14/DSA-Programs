/*
Name:-Servesh Khade
Roll No.:-26 
Batch:-B
Program:Program to implement insert,delete,display and search in linked list
*/
#include <stdio.h>
#include <stdlib.h>
struct node
{
	int info;
	struct node *next;
};
struct node *list = NULL;
struct node* getnode (void)
{
	return ((struct node *) malloc (sizeof(struct node)));
}
void freenode (struct node *p)
{
	free(p);
}
void display()
{
	struct node *print;
	print=list;
	if(list!=NULL)
	{
		int i=1;
		while(print->next!=NULL)
		{
			printf("%d:%d\n",i,print->info);
			print=print->next;
			i++;
		}
		printf("%d:%d\n",i,print->info);
	}
}
void push (int x)
{
	struct node *nn;
	nn=getnode();
	nn->info=x;
	nn->next=list;
	list=nn;
	display();
}
void pop ()
{
	struct node *dn;
	if(list==NULL)
	{
		printf("Stack is empty\n");
	}
	else
	{
	dn=list;
	list=dn->next;
	freenode(dn);
	display();
	}

}
void main()
{
	int a,n,p,l=0;
	while (l!=1)
	{
		printf("Enter \n1 for push \n2 for pop \n3 for exiting\n");
		scanf("%d",&a);
		switch(a)
		{
			case 1:
				printf("Enter number to be pushed\n");
				scanf("%d",&n);
				push(n);
				break;
			case 2:
				pop();
				break;
			case 3:
				l=1;
				printf("End of program\n");
				break;
			default:
				printf("Incorrect input\n");
				break;
		}
	}

}
