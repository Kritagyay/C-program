#include<stdio.h>
int main()
{
    int num,sum,a,b,c,d,e;
    printf("Enter a five digit number: ");
    scanf("%d",&num);
    a = num % 10;
    num = num / 10;
    b = num % 10;
    num = num / 10;
    c= num % 10;
    num = num / 10;
    d = num % 10;
    num = num / 10;
    e = num % 10;
    num = num / 10;
    sum = a+b+c+d+e;
    printf("\nThe sum of the digits is: %d", sum);
    return 0;
}