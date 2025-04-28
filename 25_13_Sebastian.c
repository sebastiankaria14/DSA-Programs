#include<stdio.h>
#include<stdlib.h>

int queue[5];
int f=-1;  //initialization of front pointer
int r=-1;  //initialization of rear pointer
int n=5;
/* Function Prototyping*/

/* Enqueue1 method is used to insert elements into the queue from the rear pointer*/
void enqueue1(int x);

/* Enqueue2 method is used to insert elements into the queue from the front pointer*/
void enqueue2(int x);

/* Dequeue1 method is used to delete element from the queue from the front pointer*/
void dequeue1();

/* Dequeue2 method is used to delete element from the queuefrom the rear pointer*/
void dequeue2();

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
		printf("\n1. Enqueue an element into the queue from the rear pointer ");
		printf("\n2. Enqueue an element into the queue from the front pointer");
		printf("\n3. Dequeue an  element from the queue from the front pointer");	
		printf("\n4. Dequeue an  element from the queue from the rear pointer");
		printf("\n5. Display the queue");
		printf("\n6. Exit");
		printf("\n Enter your choice");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:printf("\n Enter the element to be enqueued into the queue");
    	       		scanf("%d",&n1);
    	       		enqueue1(n1);break;
    	       	
    	       	case 2: printf("\n Enter the element to be enqueued into the queue");
    	       		scanf("%d",&n1);
    	       		enqueue2(n1);break;
    	       
    			case 3: dequeue1();
    	        	 	break;
    	        	 	
    	        	case 4: dequeue2();
    	        		break; 
    	
    		case 5: display();
    				break;
    	
    		case 6: exit(1);
    	
    		default: printf("\n Wrong Choice ");
    				 break;
    }    //end of switch 

}// end of while

}// end of main method

void enqueue1(int x)
{
	if(f==(r+1)%n)
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
		r=(r+1)%n;
		queue[r]=x;
		}
	}
}

void enqueue2(int x)
{
	if(f==(r+1)%n)
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
			f=(n-1+f)%n;
			
		queue[f]=x;
		}
		
	}
}
void dequeue1()
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
		    f=(f+n-1)%n;
			
		}
	}
}

void dequeue2()
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
		    r=(n-1+r)%n;
			
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
		int i=f-1;
		do
		{
		    i=(i+1)%n;
		    printf("%d \t",queue[i]);
		    
		}while(i!=r);
	}
}

