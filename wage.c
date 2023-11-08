//wage women men

#include <stdio.h>
int main()
{   int a,n;
    char s;
    printf("enter your age");
    scanf("%d",&a);
    printf("enter your sex m/f");
    scanf("%c",&s);
    printf("enter no. of working days");
    
    if(a>=18 && a<30 && s==m)
      {printf("wage is %d",n*700);}
    else if(a>=18 && a<30 && s==f)
      {printf("wage is %d", n*750);}
    else if(a>=30 && a<=40 && s==m)
       {printf("wage is %d", n*800);}
    else if(a>=30 && a<=40 && s==f)
       {printf("wage is %d ", n*850);}
    else 
        {printf("enter appropriate age");}
    return 0;
}
