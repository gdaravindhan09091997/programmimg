#include<stdio.h>
int main()
{
    int a,b,num=1;
    printf("Enter the number");
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        num=num*b;
    }
    printf("The facrotial value is %d",num);
    return 0;
    
}
