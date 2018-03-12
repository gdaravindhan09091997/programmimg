#include<stdio.h>
int main()
{
	float a,b;
	printf("Enter the temperature in celsius\n ");
	scanf("%f",&a);
	b=273.5+a;
	printf("The temperature in kelvin is %f",b);
	return 0;
}
