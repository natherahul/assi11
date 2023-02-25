#include<stdio.h>
int check_prime(int );
int main()
{
    int num,k;
    printf("enter the number:");
    scanf("%d",&num);
    k=check_prime(num);
    if(k==1)
    {
        printf("%d is not a prime number",num);
    }
    else
        printf("%d is a prime number",num);
}
int check_prime(int n)
{
    int i;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
            return 1;
    }
    return 0;
}
