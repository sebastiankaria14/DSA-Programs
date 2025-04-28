/*
Name- Servesh Khade
Roll no.- 26
Batch - B
Program - Program to implement bubble sort
*/

#include<stdio.h>

//Function prototype
void bubblesort(int *a,int n);

//Start of main 
void main()
{
	int n;
	//Accepting number of elements in the array
	printf("Enter number of elements in the array : ");
	scanf("%d",&n);
	
	//Initializing array
	int a[n];
	
	//Accepting elements in the array
	printf("Enter elements in the array\n");
	for(int i =0; i<n; i++)
	{
		printf("a%d : ",i+1);
		scanf("%d",&a[i]);
	}
	
	printf("Using bubble sort\n");
	bubblesort(a,n); //Calling function bubblesort
	
	//Printing sorted array
	printf("After sort\n"); 
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
} //End of main 

//Start of function bubblesort
void bubblesort(int *a,int n)
{
	int temp;
	//Start of for loop
	for(int i=0; i<n-1;i++)
	{
		//Start of for loop
		for(int j=0;j<n-i-1;j++)
		{
			if( a[j] > a[j+1])
			{	
				//Swapping algorithm
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		} //End of for loop
		printf("Iteration %d : ",i+1);
		for(int k=0; k<n; k++)
		{
			printf("%d ",a[k]); //Printing result after each iteration
		}
		printf("\n");
	} //End of for loop
	
} //End of main method


