#include <stdio.h>

void add(int a, int b , int *difference)
{
  *difference=a - b;
}
int main()
{
  int a=8;
  int b=3;
  int difference;
  add(a,b,&difference);
  printf("the difference of %d and %d is %d\n", a, b, difference);
  return 0;
}