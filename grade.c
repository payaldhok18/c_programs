#include <stdio.h>// grade
int main()
{
  int m;
  printf("enter marks\n");
  scanf("%d", &m);
  if (m<=100)
   {
     if(m>=90){
     printf("Excellent\n");}
     
     else if(m>=75)
     {printf("grade A\n");}
 
     else if (m>=60)
     { printf("grade B\n");}
  
     else if (m>=45)
     {printf(" grade C\n");}
  
     else if(m<=45)
     {printf(" you are fail\n");}
     
     else if(m>=0)
     {printf("fail");}
     }
}
  
