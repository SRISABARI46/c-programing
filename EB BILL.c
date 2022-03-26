 
#include <stdio.h>

int main()
 
{

 float unit,cost;
 
 while(1)
 {
  
  printf("\nENTER THE USAGE OF UNIT : ");

  scanf("%f",&unit);
  
 	
if(unit<=0 && unit<=100)
  
  	{
       
 	printf("NO COST");
  
  	}

	else if (unit>100 && unit<=300)
    
 	{
        
	cost = unit*10;
   
  	}

	else if (unit>300 && unit<=500)
   
  	{
     
    	cost = unit*12;
  	}
   
	else if(unit>=500)
   
  	{
     
    	cost = unit*20;
   
   	}

     printf("THE ELECTRICITY BILL FOR THIS MONTH IS : Rs. %0.2f",cost);

 }
   
 return 0;

}