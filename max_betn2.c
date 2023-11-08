#include <stdio.h>// max number
int main()
{
 int a,b,c;
 printf("enter 1st num\n");
 scanf("%d", &a);
 
 printf("enter 2nd num\n");
 scanf("%d", &b);
 
 printf("enter 3rd num\n");
 scanf("%d", &c);
 
 if(a>b)
   {
     if(b>c)
     {printf(" %d",b);}
     else
     {printf("%d",c);}
   }
 else 
   {
      if(c>a)
      {printf("%d",a);}
      else
      {printf("%d",c);}
   }
return 0;    
}
