#include<stdio.h>
#include <math.h>
int gcdrecursive(int m,int n)
{
    if(n==0)
    return (m);
    else
    return gcdrecursive(n,m%n);
}

int main()
{
    int x,y;
    printf("Enter the value of x:\n");
    scanf("%d",&x);

 printf("Enter the value of y:\n");
    scanf("%d",&y);
   printf("Gcd of recursive is %d\n" , gcdrecursive( x, y));
    
    return 0;
}