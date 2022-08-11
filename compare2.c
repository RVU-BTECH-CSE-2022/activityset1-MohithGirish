#include<stdio.h>
int input()
{
  int a;
  printf("enter the number");
  scanf("%d",&a);
  return a;
}
int compare(int a, int b)
{
  int c;
  if (a<b)
  {
    c=b;
  }
  else
  {
    c=a;
  }
  return c;
  }
void output(int c)
{
  printf("largest is %d\n",c);
}
int main(void)
{
  int a,b,c;
  a= input();
  b= input();
  c= compare(a,b);
  output(c);
}
