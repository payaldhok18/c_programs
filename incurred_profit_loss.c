#include <stdio.h>
int main()
{   int sp,cp,p,l;
    
    
    {printf("enter the selling price\n");
    scanf("%d",&sp);}
    
    printf("enter the cost price\n");
    scanf("%d",&cp);
    if (sp-cp)
    { p=sp-cp;
      {printf("profit incurred is %d,no loss",p);}
    }
    else
    { l=cp-sp;
      {printf("loss incurred is %d,no profit",l);}}
}
