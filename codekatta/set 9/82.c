#include<stdio.h>
int main()
{
	float a,b,c;
	printf("Enter the length and breadth");
	scanf("%f %f",&a,&b);
	c=a*b;
	printf("The area is %.5f",c);
	return 0;
}
