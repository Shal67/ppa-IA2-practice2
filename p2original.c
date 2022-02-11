#include<stdio.h>
int input_side()
{
  int n;
  printf("enter the three sides->");
  scanf("%d",&n);
  return n;
}
int check_scelene(int a, int b,int c)
{
  int isscalene;
  if (a!=b && a!=c && b!=c && c!=b)
  {
    isscalene=0;
  }
  return isscalene;
}
void output(int a,int b,int c,int isscalene )
{
  printf("the sides of the traingle is scelne %d%d%d%d",a,b,c,isscalene);
}
int main()
{
  int a,b,c,res;
  a=input_side();
  b=input_side();
  c=input_side();
  res=check_scelene(a,b,c);
  output(a,b,c,res);
  return 0;

}