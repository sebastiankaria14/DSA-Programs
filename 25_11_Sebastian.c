#include<stdio.h>
#include<stdlib.h>

int queue[5];
int f=-1;  //initialization of front pointer
int r=-1;  //initialization of rear pointer

/* Function Prototyping*/

/* Enqueue method is used to insert elements into the queue*/
void enqueue(int x);

/* Dequeue method is used to delete element from the queue*/
void dequeue();

/*display method is used to traverse and print all the elements from the stack*/
void display();

/* Main Method */
void main()
{
	int ch;//Used to store the choice
	int n1;
	
	while(1)
	{
		printf("\n ...Queue Operation...");
		printf("\n1. Enqueue an element into the queue ");
		printf("\n2. Dequeue an  element from the queue");	
		printf("\n3. Display the queue");
		printf("\n4. Exit");
		printf("\n Enter your choice");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:printf("\n Enter the element to be enqueued into the queue");
    	       scanf("%d",&n1);
    	       enqueue(n1);break;
    	       
    		case 2: dequeue();
    	        	break;
    	
    		case 3: display();
    				break;
    	
    		case 4: exit(1);
    	
    		default: printf("\n Wrong Choice ");
    				 break;
    }    //end of switch 

}// end of while

}// end of main method

void enqueue(int x)
{
	if(r==4)
	{
		printf("Queue is Full");
	}
	else
	{
		if(f==-1&&r==-1)
		{
			f=0;
			r=0;
			queue[r]=x;
		}
		else
		{
			r++;
			queue[r]=x;
		}
	}
}
void dequeue()
{
	if(f==-1&&r==-1)
	{
		printf("Queue is Empty");
	}
	else
	{
		if(f==r)
		{
			f=-1;
			r=-1;
		}
		else
		{ 
			printf(" \n %d element dequeued",queue[f]); 
			f++;
			
		}
	}
}
void display()
{
	if(f==-1&&r==-1)
	{
		printf("Queue is Empty");
	}
	else
	{
		for(int i=f;i<=r;i++)
		{
			printf("%d \t",queue[i]);
		}
	}
}


















	
	
	
	
	
	
	
	
	
	
	
	
