#include<stdio.h>
int input()
{
  int n;
  printf("Enter a number:");
  scanf("%d",&n);
  return n;
}
int is_composite(int n)
{
  int i,num=0;
  for(i=1;i<=n;i++)
  {
    if(n%i==0)
    num++;
  }
  return num;
}
void output(int n,int num)
{
  if(num>2)
  printf("Number is Composite");
  else
  printf("Number is not Composite:");
}
int main()
{
  int n,num;
  n=input();
  num=is_composite(n);
  output(n,num);
  return 0;
}
