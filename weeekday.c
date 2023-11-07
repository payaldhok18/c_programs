#include <stdio.h>
int main()
{
  int wdn,wd;
  
  printf("enter week number\n");
  scanf("%d", &wdn);
  
  if(wdn==1){
      printf("Monday");
  }
  else if(wdn==2){
      printf("Tuesday");
  }
  else if(wdn==3){
      printf("Wednesday");
  }
  else if(wdn==4){
      printf("Thrusday");
  }
  else if(wdn==5){
      printf("friday");
  }
  else if(wdn==6){
      printf("saturday");
  }
  else if(wdn==7){
      printf("sunday");
  }
  else{
      printf("enter the week day number between 1-7");
}
return 0;
}
