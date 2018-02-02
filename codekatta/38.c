#include<stdio.h>
void swap(int *,int *);
void main()
{
	int a,b;
	printf("Enter the two numbers");
	scanf("%d %d",&a,&b);
	printf("The numbers before swapping are %d %d\n",a,b);
	swap(&a,&b);
	printf("The numbers after swapping are %d %d \n",a,b);
}
void swap(int *x,int *y)
{
	*x=*x^*y;
	*y=*x^*y;
	*x=*x^*y;
}
