#include <stdio.h>
void input(float*base, float*height)
{
  printf("enter the base of triangle-");
  scanf("%f",base);
  printf("enter height of triangle-");
  scanf("%f" ,height);
}
void find_area(float base,float height, float*a)
{
  *a=0.5*(base)*(height);
}
void output(float base, float height, float a)
{
  printf("the area of the triangle with base %f and height %f is%f",base, height, a);
}
int main()
{
  float base, height, a;
  input(&base,&height);
  find_area(base, height,&a);
  output(base,height,a);
  return 0;
}