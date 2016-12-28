#include<stdio.h>
int main()
{
    int i,n;
    printf("enter the no");
    scanf("%d",&n);
    if(n>0)
    {
        printf("it is positive ");

    }
    if(n<0)
    {
        printf("it is negative");

    }
    else if(n=0)
    {
        printf("it is zero");
    }
    return 0;
}
