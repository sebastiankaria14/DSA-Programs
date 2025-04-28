

#include <stdio.h>

void main()

{
   int a[100],size,i,j,temp;
   printf("enter the size of the array");
   scanf("%d",&size);
  printf("enter the elements");
   for(i=0;i<size;i++)
   {
       scanf("%d",&a[i]);
   }
   temp=a[0];
   for(i=1;i<size;i++)
   {
       if(a[i]>temp)
       temp=a[i];
   }
   printf("%d",temp);
  
}