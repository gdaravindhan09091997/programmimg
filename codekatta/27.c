#include <stdio.h>
int main()
{
char s;
int a[1000],i,d=0;
for(i=0;i<=1000;i++)
{
a[i]=i;
}
scanf("%s",&s);
for(i=0;i<=1000;i++){
if(s==a[i])
d=1;}
if(d==1)
printf("yes");
else
printf("no");
return 0;
}
