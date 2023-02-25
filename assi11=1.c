#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    printf("enter the string:");
    scanf("%s",str);
    strlwr(str);
    printf("hello %s",str);

}