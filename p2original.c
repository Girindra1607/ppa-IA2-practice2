#include<stdio.h>
int input()
{
  int n;
  printf("Enter side value:");
  scanf("%d",&n);
  return n;
}
int check_scalence(int a,int b,int c)
{
  int scalence;
  if((a!=b)&&(b!=c)&&(c!=a))
  {
  scalence= 0;
  }
  else
  {
  scalence= 1;
  }
  return scalence;
}
void output(int a,int b,int c,int scalence)
{
  if(scalence== 0)
  printf("The given triangle is scalence");
  else
  printf("The given triangle is not scalence");
}
int main()
{
  int a,b,c,scalence;
  a=input();
  b=input();
  c=input();
  scalence=check_scalence(a,b,c);
  output(a,b,c,scalence);
  return 0;
}
