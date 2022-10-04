//Compiler version gcc  6.3.0

#include<stdio.h>
#include<conio.h>
int main()
{
  int No=0,Dig=0,zcnt=0,Temp=0;
  
  printf("Enter any Number=>");
  scanf("%d",&No);
  
  Up:
    
    Temp = No;
    
    while(Temp > 0)
    {
      Dig = Temp % 10;
      
      if(Dig %2 == 0)
      {
        zcnt++;
      }
      Temp = Temp / 10;
    }
    
    printf("\n\n Even number in givn number %d is %d.",No,zcnt);
    
    getch();
    return 0;

}