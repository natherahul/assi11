#include<stdio.h>
int square(int );
int main()
{
    int num,k;
    printf("enter the number:");
    scanf("%d",&num);
    k=square(num);
    printf("the square of the %d is %d",num,k);
}
int square(int num)
{
    int sq;
    sq=num*num;
    return sq;
}