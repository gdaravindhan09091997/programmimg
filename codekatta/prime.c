#include<stdio.h>
int main()
{
    int a,i,f=0;
    printf("Enter the number");
    scanf("%d",&a);
    for(i=2;i<=a;i++)
    {
        if(a%2==0)
        {
            f=1;
            break;
        }
    }
    if(f==0)
    printf("Yes",a);
    else
    printf("No",a);
return 0;
}
