#include<stdio.h>
#include<conio.h>
int main()
{
    int r,n,sum=0;
    printf("Enter the number ");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n % 10;
        sum=sum+r;
        n=n/10;

    }
    printf("The sum of digits is %d",sum);
    return 0;
}
