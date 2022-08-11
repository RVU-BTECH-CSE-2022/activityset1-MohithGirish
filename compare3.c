#include <stdio.h>

int input()
{
  int a;
  printf("Enter value");
  scanf("%d", &a);
  return a;
}
int compare(int a, int b)
{
  int d;
  if (a<b)
  {
    d=b;
  }
  else
  {
    d=a;
  }
  return d;
}
int campare(int c, int d)
{
  int e;
  if (c<d)
  {
    e=d;
  }
  else
  {
    e=c;
  }
  return e;
}
void output(int e)
{
  printf("largest is %d\n", e);
}
int main(void)
{
  int a, b, c, d, e;
  a = input();
  b = input();
  c = input();
  d = compare(a,b);
  e = campare(c,d);
  output(e);
}