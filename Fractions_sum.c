// this program reads 2 fractions and outputs their sum in the simplified form 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(void) {
  char string [100];
  printf("Input two fractions, in the form N1/D1 N2/D2:\n");
  fgets(string, 100, stdin);
  char num [100];
  
  int count=0, variable=0;
  
  int i=0;
  char *arr[100];
  arr[i] = strtok(string,"/ ");
  while(arr[i]!=NULL)
  {
    arr[++i] = strtok(NULL,"/ ");
  }

    num[variable]=string[i];
    variable++;
  
  int n1,n2, d1, d2;
  n1=atoi(arr[0]);
  n2=atoi(arr[2]);
  d1=atoi(arr[1]);
  d2=atoi(arr[3]);
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
    if(n==d)
    {
      res=n;
    }
  }
  
  printf("\nThe simplified sum of these fraction is:\n");
  printf("%d/%d\n\n", ((d2*n1)+(d1*n2))/res, (d1*d2)/res);
  
 
  
  return 0;
}
