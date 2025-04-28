#include<stdio.h>
 
void main()
{
    int a=0,b=1,c,n;
    printf("enter the number you want to search in fibonacci series");
    scanf("%d",&n);
    printf("%d %d",a,b);
    for(int i=1;i<=10;i++)
    {
       c=a+b;
       a=b;
       b=c;
       printf(" %d ",c);
       if(n==c)
       {
          printf("given number %d is a part of the above fibonacci series",c);
          break;
       }
       if(c>n)
      { break; } 
    }
    if(n!=c)
    {
      printf("given number %d is not a part of the above  fibonnaci series ",n);
    }
    
 }
