//Compiler version gcc  6.3.0
#include<stdio.h>
#include<conio.h>
int main()
{
      float Amount=0.0;
      
      
      printf("\n\n Enter Your Account Balance= ");
      scanf("%f",&Amount);
        
      if(Amount>1000)
      { 
           printf(" Welcome To Mall !!!");
            
       if(Amount>10000)
      {
           printf("You Can Be Prime Member Of This Mall!!!");
              
      }
           printf("\n Have A Nice Shopping !!!");
           
      }
         
         
          else
          { 
             printf("\n\n Minimum Reqired To Shop Here Is 1000+");
             
             
            if(Amount>500)
            {
              printf("\n\n But You Can Visit Outlet Corner!!!");
            }
           
          
           
          else
          {
            printf("\n You are not eligible to shoping !!!");
          }
       }
          
           
           printf("Thanks For Visit !!!");
          
          
           getch();
           return 0;
           
           
}
  
  
  
  
  
  
  
