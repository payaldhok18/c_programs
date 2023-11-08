#include <stdio.h>//positive negative
int main()
{
  int num;
  printf("enter a number");
  scanf("%d", &num);
  if (num>0)
  {
     printf("num is positive");
  }
  else if (num<0)
  {
    printf("num is negative");
  }
  else 
  { printf("num is zero");}
}
