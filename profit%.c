#include <stdio.h>
int main()
{   int sp,cp,p,pp;
    printf("enter the selling price\n");
    scanf("%d",&sp);
    
    printf("enter the cost price\n");
    scanf("%d",&cp);
    
    if(sp>cp)
      { p=sp-cp;
        pp=100*(p/cp);
      {printf("profit percentage %d",pp);}}
      
    else 
       {printf("invalid");}
}
