#include <stdio.h>// minimum between 3
int main()
{
  int a,b,c,min;
  
  printf("enter first number\n");
  scanf("%d", &a);
  
  printf("enter the 2nd number\n");
  scanf("%d", &b);
  
  printf("enter the 3rd number\n");
  scanf("%d", &c);
  
  if(a<b)
     {min=a;
     if(min<c)
     {printf("%d",min);}
     else
     {printf("%d",c);}}
    
  else if(b<a)  
     { min=b;
     if(min<c)
     {printf("%d",min);}
     else
     {printf("%d",c);}}
}
