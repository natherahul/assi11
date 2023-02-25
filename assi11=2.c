#include<stdio.h>
int hcf(int ,int);
int main()
{
    int n1,n2,k;
    printf("enter the two numbers:");
    scanf("%d%d",&n1,&n2);
    k=hcf(n1,n2);
    printf("hcf of %d and %d is %d",n1,n2,k);
}
int hcf(int num1,int num2)
{
    int i,min;
    min=num1<num2?num1:num2;
    i=min;
    while(i<=min)
    {
        if(num1%i==0 && num2%i==0)
            return i;
        i--;
    }
}
