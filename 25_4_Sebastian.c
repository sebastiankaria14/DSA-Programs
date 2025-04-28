#include<stdio.h>
struct student
{
    char name[50];
   int roll;
   float per;
}s[5],temp;
void main()
{ 
   int i,j;
   for( i=0;i<5;i++)
   { 
      
      printf("enter the roll number of student %d : ",i+1);
      scanf(" %d",&s[i].roll);
      printf("enter the name of the student :");
      scanf(" %s",s[i].name);
      printf("enter the percentage of the student :");
      scanf(" %f",&s[i].per);
      printf("\n ");
    }
    for(i=0;i<5;i++)
    { 
         for(j=i+1;j<5;j++)
         {
       
          if(s[i].per<s[j].per)
          {
               temp=s[i];
               s[i]=s[j];
               s[j]=temp;
          }
       
     }
     }
     for(int i=0;i<5;i++)
     {
         printf("Roll no:%d \n Name:%s \n Percentage:%f \n",s[i].roll,s[i].name,s[i].per);
     }
}