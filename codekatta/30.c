#include<stdio.h>
int main()
{
	int m1,m2,h1,h2,hr,min;
	
	printf("enter the hours\n");
	scanf("%d%d",&h1,&h2);
	printf("enter the mintues:\n");
	scanf("%d%d",&m1,&m2);
	hr=(h1-h2);
	min=(m1-m2);
  printf("%d  %d",hr,min);
	return 0;
}
