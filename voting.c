#include <stdio.h>//vote eligible or not
int main()
{    
     int age;
     
     printf("enter age");
     scanf("%d", &age);
     
     if (age>=18 && age>=65)
     {printf("eligible for vote and he is senior citizen");}
     
     else if (age>=18 || age<=65)
     {printf("eligible for vote and  not senior citizen");}
     
     else 
     {printf("not eligible for vote and not a senior citizen");}
     
}
