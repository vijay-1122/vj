#include<stdio.h>
#include<ctype.h>
int main()
{

    char n;
    printf("enter the char\n");
    scanf("%c",&n);
    if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u')
    {
        printf("vowels");
    }

        else
            printf("consonent");

    return 0;
}
