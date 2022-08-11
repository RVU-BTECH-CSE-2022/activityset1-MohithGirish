 #include <stdio.h>
void input( int a, int b)
{
  printf("Enter value:");
  scanf("%d %d", &a,&b); 
}
void compute(int a, int b, int *area)
{
  *area=a*b; 
}
int main()
{
  int a,b,area;
  input(a,b);
  compute(a,b, &area);
  printf("The area of rectangle with length = %d and breadth = %d is %d\n", a, b, area);
  return 0;
}
