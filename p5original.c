#include<stdio.h>
int input(){
  int n;
  printf("enter the two numbers whose hcf has to be found->");
  scanf("%d",&n);
  return n;
}
int gcd(int a,int b){
  int i,gcd;
  for(i=1; i <= a && i <= b; ++i)
    {
        // Checks if i is factor of both integers
        if(a%i==0 && b%i==0)
            gcd = i;
    }
  return gcd;
}
int output(int a,int b,int gcd){
  printf("the G.C.D o the two numbers %d and %d is %d",a,b,gcd);
}
int main(){
  int a,b,final;
  a=input();
  b=input();
  final=gcd(a,b);
  output(a,b,final);
  return 0;
  }
