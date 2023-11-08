#include <stdio.h>// max between 3
int main()
{
  int a,b,c,max;
  
  printf("enter first number\n");
  scanf("%d", &a);
  
  printf("enter the 2nd number\n");
  scanf("%d", &b);
  
  printf("enter the 3rd number\n");
  scanf("%d", &c);
  
  if(a>b)
     {max=a;
     if(max>c)
     {printf("%d",max);}
     else
     {printf("%d",c);}}
    
  else if(b>a)  
     { max=b;
     if(max>c)
     {printf("%d",max);}
     else
     {printf("%d",c);}}
}
