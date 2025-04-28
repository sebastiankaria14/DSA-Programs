

#include<stdio.h>
#include<stdlib.h>
void up ();
struct time
{
   int hour;
   int sec;
   int min;
}s1;

void main()
{
   s1.hour=10;
   s1.min=15;
   s1.sec=30;
   int choice;
   while(1)
   {
   	printf("\n enter input time (1),display time(2),update time(3),exit(4)");
   	scanf("%d",&choice);
   	switch(choice)
   	{
        	case 1: printf("enter the time");
        			int h,m,s;
        			scanf("%d %d %d",&h,&m,&s);
        		     if(h>24||m>60||s>60)
        		     {
					printf("enter correct time");
				}
				else
				{
					s1.hour=h;
					s1.min=m;
					s1.sec=s;
                       		
                       }
                       break;
        	case 2:printf("the time is %d:%d:%d",s1.hour,s1.min,s1.sec);break;
                   
        	case 3:   up ();break; 
        	
        	case 4: exit(1);
                     
         	default: printf("errror");break;
    }
    }
}
    void up (){
              
              int h,m,s;
                      printf("enter the time to update");
                      scanf("%d %d %d",&h,&m,&s);
                      s1.sec=s+s1.sec;
                      if(s1.sec>59)
                      {
                          s1.sec=s1.sec-60;
                          s1.min++;
                      }
                      s1.min=m+s1.min;
                      if(s1.min>59)
                      {
                          s1.min =s1.min-60;
                          s1.hour++;
                      }
                      s1.hour=s1.hour+h;
                      if(s1.hour>23)
                      { s1.hour =s1.hour-24;}
                       printf("the time is %d:%d:%d",s1.hour,s1.min,s1.sec);
                      }   
                      

