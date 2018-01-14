#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the first letter:\n");
	scanf("%d",&a);
	printf("Enter the second letter:\n");
	scanf("%d",&b);
	printf("Enter the third letter:\n");
	scanf("%d",&c);
	if(a>b&&a>c)
	printf("%d is the largest number",a);
	if(b>a&&b>c)
	printf("%d is the largest number",b);
	if(c>=a&&c>=b)
	printf("%d is the largest number",c);
	return 0;
}
