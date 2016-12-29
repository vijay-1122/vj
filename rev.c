#include<stdio.h>
int main()
{
    int i=-1,j=0;
    char str[50];
    char rev[50];
    printf("enter the string");
    scanf("%s",&str);
    while(str[++i]!='\0')
        while(i>=0)
        rev[j++]=str[--i];
    rev[j]='\0';
        printf("rev %s",rev);

    return 0;

}

