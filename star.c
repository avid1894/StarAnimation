//to create a star animation from the left of the screen depending on the screen width as entered by the user
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>
void delay(unsigned int mseconds)
{
   clock_t goal = mseconds; 
   sleep(goal/1000);
}
int main()
{

int i=0,w;

printf("Enter the screen width");
scanf("%d", &w);
		  while(i<w)
        {

		delay(1000); 
        
		printf("\b *");
	
         ++i;
        
   			 if(i==w)
        	{ 
        		printf("\b \r");
				i=0;   
   			}
 
          
		}
return 0;
}


