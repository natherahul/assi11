#include<stdio.h>
void prime(int ,int);
int main()
{
    int n1,n2;
    printf("enter the two numbers:");
    scanf("%d%d",&n1,&n2);
    prime(n1,n2);
}
void prime(int num1,int num2)
{
    int i,j;
    for(i=num1;i<=num2;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
                break;
        }
        if(i==j)
            printf("%d ",j);
    }
}
