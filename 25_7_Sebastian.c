#include<stdio.h>
void main()
{
     int a[10],b[10],n,i,j,c=1;
     printf("enter the number of elements");
     scanf("%d",&n);
     printf("enter elements of first array");
     for(i=0;i<n;i++)
     {
       scanf("%d",&a[i]);
      }
      printf("enter elements of second array");
       for(j=0;j<n;j++)
     {
       scanf("%d",&b[j]);
      }
      for(i=0;i<n;i++)
      {
         if(a[i]!=b[i])
         {
		c=0;
		break;
	  }	
      }
      printf("\n %d",c);
}
