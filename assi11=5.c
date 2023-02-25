#include<stdio.h>
void print_prime(int );
int main()
{
    int num;
    printf("enter n:");
    scanf("%d",&num);
    print_prime(num);
}
void print_prime(int n)
{
    int i,j;
    for(i=2;i<=n;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
                break;
        }
        if(i==j)
            printf("%d ",i);
    }
}
