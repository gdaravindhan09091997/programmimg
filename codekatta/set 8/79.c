#include<stdio.h>
int main()
{
  int a,b,c,i,f=0;
  printf("Enter the numbers");
  scanf("%d %d",&a,&b);
  c=a*b;
  printf("The product is %d\n",c);
  for(i=2;i<c;i++)
  {
    if(c==(i*i))
    {
    f=0;
    break;
    }
    else
    f=1;
  }
  if(f==0)
  printf("%d is a perfect square",c);
  else
  printf("%d is not a perfect square",c);
  return 0;
}
