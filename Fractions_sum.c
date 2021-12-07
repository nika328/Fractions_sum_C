// this program reads 2 fractions and outputs their sum in the simplified form 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(void) {
  int n1, n2, d1, d2;
  printf("Enter 2 fractions to be added: ");
  scanf("%d/%d %d/%d", &n1, &d1, &n2, &d2);
  int d=d1*d2;
  int n=(n1*d2)+(d1*n2);
  int res=-1;
 while (res<0)
  {
    if (n==0)
    {
      res=d;
    }
    if(d==0)
    {
      res=n;
    }
    if(n==d)
    {
      res=d;
    }
    if(n>d)
    {
      n-=d;
    }
    if(d>n)
    {
      d-=n;
    }
  }
  
  printf("\nThe simplified sum of these fraction is:\n");
  printf("%d/%d\n\n", ((d2*n1)+(d1*n2))/res, (d1*d2)/res);
  
 
  
  return 0;
}
