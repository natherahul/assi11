#include<stdio.h>
void fibbinacci(int );
int main()
{
    int num;
    printf("enter number:");
    scanf("%d",&num);
    fibbinacci(num);
}
void fibbinacci(int num)
{
    int i,j=-1,k=1,l;
    printf("first %d fibbonacci series number are:",num);
    for(i=1;i<=num;i++)
    {
        l=j+k;
        j=k;
        k=l;

        printf(" %d",l);
    }
}
