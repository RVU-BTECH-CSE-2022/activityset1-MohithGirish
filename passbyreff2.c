#include <stdio.h>
void add(int a, int b,int *sum)
{
 *sum= a + b;
}
int main()
{
  int a=2 , b=6 , sum;
  add(a,b,&sum);
  printf("The sum of %d and %d is %d\n", a, b, sum);
  return 0;
}
