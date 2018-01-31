#include<stdio.h>
int main()
{
int a,b,temp;
printf("Enter the two number\n");
scanf("%d%d",&a,&b);
printf("Before swaping %d %d\n",a,b);
temp=a;
a=b;
b=temp;
printf("After swaping %d %d\n",a,b);
return 0;

	
}
