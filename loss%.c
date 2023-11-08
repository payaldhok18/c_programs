#include <stdio.h>
int main()
{   int sp,cp,l,lp;
    printf("enter the selling price\n");
    scanf("%d",&sp);
    
    printf("enter the cost price\n");
    scanf("%d",&cp);
    
    if(sp<cp)
      { l=cp-sp;
        lp=100*l/cp;
        {printf("loss percentage %d",lp);}
      }
      
    else 
       {printf("invalid");}
}

