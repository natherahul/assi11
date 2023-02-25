#include<stdio.h>
int series(int );
int fact(int );
int main()
{
    int num,s;
    printf("enter the number:");
    scanf("%d",&num);
    s=series(num);
    printf("sum of the series is %d",s);
}
int series(int num)
{
    int i,sum=0;
    for(i=1;i<=num;i++)
    {
        sum=sum+fact(i)/i;
    }
    return sum;
}
int fact(int i)
{
    int sum=1,j;
    for(j=1;j<=i;j++)
    {
        sum=sum*j;
    }
    return sum;
}