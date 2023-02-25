#include<stdio.h>
int next_prime(int );
int main()
{
    int num,k;
    printf("enter the number:");
    scanf("%d",&num);
    printf("%d is a next prime number",next_prime(num));
}
int next_prime(int n)
{
    int i,j;
    for(i=n+1;i<=n*2;i++)
    {
        for(j=2;j<i;j++)
       {
          if(i%j==0)
            break;
       }
       if(j==i)
        return i;

    }
}
