#include <stdio.h>
int main()
{
  int n;
  printf("enter no. of days");
  scanf("%d",&n);
  if (n>1 && n<=5)
    {printf("charge is %d ", n*2);}
  else if(n>5 && n<=10)
      {printf("charge is %d ",n*3);}
  else if(n>10 && n<=15)
      {printf("charge is %d ",n*4);}
  else if(n>15)
      {printf("charge is %d ",n*5);}
  else
  {
      printf("enter correct day number");
  }
return 0;
}
