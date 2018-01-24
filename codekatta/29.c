#include<stdio.h>
int main()
{
int hr,min,a;
scanf("%d",&a);
hr=a/60;
min=a%60;
printf("hr and min are %d\t%d",hr,min);
return 0;
}
