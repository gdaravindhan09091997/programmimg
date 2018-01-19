#include<stdio.h>
int main()
{
int a,i,sum=0;

printf("Enter the natural number:\n");
scanf("%d",&a);
for(i=0;i<=a;i++)
{
sum=sum+i;	
}
printf("Sum is %d",sum);
return 0;
}
