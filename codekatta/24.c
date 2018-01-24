#include<stdio.h>
int main()
{
int i,j, a[90],m,temp;
printf("enter no ");
scanf("%d",&m);
printf("enter array");
for(i=1;i<=m;i++)
scanf("%d",&a[i]);
for(i=1;i<=m;i++)
{
for(j=i+1;j<=m;j++)
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
for(i=1;i<=m;i++)
printf("%d ",a[i]);
return 0;
}
