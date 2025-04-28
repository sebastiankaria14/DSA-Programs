/*
Roll No : 26
Batch:B
Name: Servesh Khade
Date:29/7/24
Description: This Program lets us understand the implementation of stack
*/
#include<stdio.h>
#include<stdlib.h>

int s[5];
int top=-1;// Stack initialization Condition
	
/* Function Prototyping */
//push method is used to insert element into the stack
void push(int x);
	
//pop method is used to delete element from the stack
void pop();
	
//display method is used to traverse and print all the elements from the stack'
void display();
	
/* Main Method*/
void main()
{
int ch;//used to store choice
int n1;

while(1)
{
    printf("\n ....Stack Operation..");
    printf("\n1. Push an element into the stack");
    printf("\n2. Pop out an element  from the stack");	
    printf("\n3. Display the stack");
    printf("\n4. Exit");
    
    printf("\n Enter your choice");
    scanf("%d",&ch);
    
    switch(ch)
    {
    	case 1:printf("\n Enter the element to be pushed into the stack");
    	       scanf("%d",&n1);
    	       push(n1);break;
    	       
    	case 2: pop();
    	        break;
    	
    	case 3: display();
    		break;
    	
    	case 4: exit(1);
    	
    	default: printf("\n Wrong Choice ");
    		 break;
    }    //end of switch 

}// end of while

}// end of main method

/* Push Method */
void push(int x)
{
	if(top==4)
	{
		printf("Stack is Full");
	}
	else
	{
		top++;
		s[top]=x;
    }
}	
// End of push Method

/* Pop Method  */
void pop()
{
	if(top==-1)
	{
		printf("Stack is Empty");
	}
	else
	{   
		int a=s[top]; 
		top--;
		printf("\n %d Element popped out of the stack",a);
	}
}
//End of Pop

/* Display Method */
void display()
{
	int i;
	if(top==-1)
	{
		 printf("Stack is Empty");
	}
	else
	{
		printf("\n Elements in the stack are");
		for(i=top;i>=0;i--)
		{
			printf("\n %d",s[i]);
		}
	}
}
// End of Display

