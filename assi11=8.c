#include<stdio.h>
void pascal(int);
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    pascal(num);
}
void pascal(int num)
{
    int i,j;
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=2*num-1;j++)
        {
            if(j>=num-i+1 && j<=num-1+i)
            {
                if(j%2==0 && i%2!=0)
                    printf("*");
                else if(j%2!=0 && i%2==0)
                    printf("*");
                else
                    printf(" ");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}