#include<stdio.h>
int main()
{
	float p,t,r,i;
	printf("Enter the principal,rate and time\n");
	scanf("%f %f %f",&p,&r,&t);
	i=(p*t*r)/100;
	printf("The simple interest is %.2f",i);
	return 0;
}
