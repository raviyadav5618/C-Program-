//Compiler version gcc  6.3.0
#include<stdio.h>
#include<conio.h>

int main()
{         
        
     float Amount=0.0;
        
        printf(" Enter Your Account Balance=\n");
        scanf("%f",&Amount);
        
     if(Amount>10000)
       {
         printf(" Welcome To 5 Star mall !!!");
         printf("\n\n You Are a Prime Costomer!!!");
         printf("\n\n Go To Counter No 7 For Prime Offers !!!");
       }
         
     else if(Amount>7000)
       {
         printf("\n\n Welcome To 5 Star Mall !!!");
         printf("\n\n You can Enjoy All Shops");
       } 
          
      else if(Amount>1000)
        {
          printf("\n\n Welcome To 5 Star Mall !!!");
          printf("\n\n You Can Shoping At Ground Floor !!!\n ");
        } 
          
      else
          {
            printf("\n\n\t Minimum Balance Reqired To Shop is 1000+\n ");
          }
          
          printf("\nThanks For visiting 5 Star Mall!!!");
            
            
            
            getch();
            return 0; 
           
           
 } 