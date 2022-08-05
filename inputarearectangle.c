#include<stdio.h>

float input(char s[])
{
  float x;
  printf("Enter %s",s);
  scanf("%f",&x);
  return x;
}
float find_area(float length, float width)
{
  float area = length * width;
  return area;
}
void output(float length, float width, float area)
{
 printf("The area of the rectangle with length= %f and width= %f is %f\n", length,width,area);
}

int main(void)
{
  float length, width, area;
  length= input("length");
  width= input("width");
  area= find_area(length,width);
  output(length, width, area);
  return 0;
}
