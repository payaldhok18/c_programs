#include <stdio.h>//even odd
int main()
{
  int num;
  printf("enter a number\n");
  scanf("%d", &num);
  if (num>0)
  {
     printf("num is positive\n");
  }
  if(num%2==0)
  {
    printf("the num %d is even",num);
  }
  else 
  { printf("num is odd");
  }
}
