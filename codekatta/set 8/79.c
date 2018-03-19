#include<stdio.h>
int main()
{
  int a,b,c;
  printf("Enter the two numbers");
  scanf("%d %d",&a,&b);
  c=a*b;
  printf("The product is %d\n",c);
  if(a==b)
  printf("It is a perfect square");
  else
  printf("It is not a perfect square");
  return 0;
}
