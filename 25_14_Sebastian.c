/*
Name:-Servesh Khade
Roll No.:-26 
Batch:-B
Program:Program to implement insert,delete,display and search in linked list
*/


#include<stdio.h>
#include<stdlib.h>


/*Function Prototype*/

//insertbeg method is used to insert a element at beginning
void insertbeg();

//insertend method is used to insert a element at end
void insertend();

//insertloc method is used to insert a element at a given location
void insertloc();

//deletebeg method is used to delete a element at beginning
void deletebeg();

//deleteend method is used to delete a element at end
void deleteend();

//deleteloc method is used to delete a element at a given location
void deleteloc();

//Display function is used to display the elements of linked list
void display();

//Display function is used to search a element in linked list
void search();

//Getnode is used to create a new node
struct node* getnode();

//freenode is used to delete a node
void freenode(struct node *p);


//Structure
struct node
{
int info;
struct node *next;
};


//Initialization of list
struct node *list = NULL;


/*Start of main*/
void main()
{
/*start of infinite while loop*/
while(1)
{
int c;
printf("\n/*Linked list Operations*/\n");
printf("1. insert a element at beginning\n");
printf("2. insert a element at end\n");
printf("3. insert a element at a given location\n");
printf("4. delete a element at beginning\n");
printf("5. delete a element at end\n");
printf("6. delete a element a given location\n");
printf("7. display the elements of linked list\n");
printf("8. search a element in linked list\n");
printf("9. Exit\n\n");
printf("Enter your choice");
scanf(" %d",&c);

/*Start of Switch case*/
switch(c)
{
case 1: insertbeg();printf("\n");break;
case 2: insertend();printf("\n");break;
case 3: insertloc();printf("\n");break;
case 4: deletebeg();printf("\n");break;
case 5: deleteend();printf("\n");break;
case 6: deleteloc();printf("\n");break;
case 7: display();printf("\n");break;
case 8: search();printf("\n");break;
case 9: exit(1);break;
}
/*End of switch case*/
}
/*End of infinite while loop*/
}
/*End of main*/


/*Start of getnode*/
struct node* getnode()
{
return ((struct node*) malloc(sizeof(struct node)));
}
/*End of getnode*/


/*Start of freenode*/
void freenode(struct node *p)
{
free(p);
}
/*End of freenode*/


/*Start of insertbeg*/
void insertbeg()
{
int x;
printf("Enter number to insert at beginning:-");
scanf("%d",&x);
struct node *newnode;
newnode = getnode();
newnode->info = x;
newnode->next = list;
list = newnode;
printf("%d is added at beginning",x);
}
/*End of insertbeg*/


/*Start of insertend*/
void insertend()
{
int x;
printf("Enter number to insert at end:-");
scanf("%d",&x);
struct node *newnode=getnode(),*temp;
newnode->info=x;
newnode->next=NULL;
temp=list;
if(temp==NULL)
{
   list=newnode;
}
else
{
   while(temp->next!=NULL)
   {
       temp=temp->next;
   }
   temp->next=newnode;
}
printf("%d is added at end",x);
}
/*End of insertend*/


/*Start of insertloc*/



/*Start of insertloc*/
void insertloc()
{
int x,p;
printf("Enter number & location to insert at location:-");
scanf("%d%d",&x,&p);
struct node *newnode=getnode(),*temp;
newnode->info=x;
temp=list;
if(temp==NULL)
{
   printf("Linked list is empty\nInserting %d at location 1",x);
   newnode->next=temp;
   list=newnode;
}
else
{
   for(int i=1;i<p-1;i++)
   {
       if(temp->next==NULL)
       {
           printf("Linked list contains only %d elements, hence inserting %d at %d position",i,x,i+1);

           break;
       }
       else
       {
           temp=temp->next;

       }   

    }
   newnode->next=temp->next;
   temp->next=newnode; 
printf("%d is added at location %d",x,p);
}
}
/*End of insertloc*/


/*Start of deletebeg*/
void deletebeg()
{
struct node *temp;
temp=list;
if(temp==NULL)
{
   printf("List is empty");
}
else
{
   printf("%d is deleted",temp->info);
   list=temp->next;
   printf("%d is deleted from beginning",temp->info);
   freenode(temp);
}
}
/*End of deletebeg*/


/*Start of deleteend*/
void deleteend()
{
struct node *temp,*pre;
temp=list;
if(temp==NULL)
{
   printf("List is empty");
}
else
{
   while(temp->next!=NULL)
   {
     
           pre=temp;
           temp=temp->next;
     
   }
   pre->next=NULL;
   printf("%d is deleted from end",temp->info);
   freenode(temp);
}
}
/*End of deleteend*/


/*Start of deleteloc*/
void deleteloc()
{
   
struct node *temp,*pre;
temp=list;
if(temp==NULL)
{
   printf("List is empty");
}
else
{
   int p;
        printf("Enter location which you want to delete");
        scanf("%d",&p);
        if(p==1)
   {
       list=temp->next;
       freenode(temp);
   }
   else
   {
            for(int i=1;i<p;i++)
       {
           if(temp->next==NULL)
           {
             
               break;
           }
           else
           {
               pre=temp;
               temp=temp->next;
           }
           
       }
       if(temp->next!=NULL)
       {
           printf("%d is deleted from location %d",temp->info,p);
           pre->next=temp->next;
           freenode(temp);
       }
   }
}
}
/*End of deleteloc*/


/*Start of display*/
void display()
{
    struct node*temp;
    temp=list;
    if(temp==NULL)
{
   printf("List is empty");
}
    else
    {
        printf("Elements in list are:-\n");
        while(temp!=NULL)
        {
            printf("%d\n",temp->info);
            temp=temp->next;
        }
    }
}
/*End of display*/


/*Start of search*/
void search ()
{
    int n,i=1;
    struct node *temp=list;
    if(temp==NULL)
{
   printf("List is empty");
}
    else
    {
        printf("Enter a number to search");
        scanf("%d",&n);
        while(temp!=NULL)
        {
            if(temp->info==n)
            {
                
                printf("%d is a element of linked list and it's position is %d",n,i);
                break;
            }
            i++;
            temp=temp->next;
        }
        if(i==0)
        {
            printf("Entered number doesn't exists in list");
        }
    }
}
/*End of search*/




