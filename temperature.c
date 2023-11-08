#include <stdio.h>// tempereature 
int main()
{
 int lower;
 for(lower=0; lower<=300; lower=lower+20)
 {  
 printf("%d\t%d\n", lower, 5*(lower-32)/9);
 }
 return 0;
}

#include <stdio.h>
int main()
{
 int lower, higher, step;
 float c;
 lower=0;
 higher=300;
 step=20;
 while(lower<=higher)
 {  c=5.0/9.0*(lower-32.0);
    printf("%3d\t%5.1f\n", lower, c);
    lower=lower+step;
 }
 return 0;
}
