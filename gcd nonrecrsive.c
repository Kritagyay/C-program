#include<stdio.h>
#include <math.h>
int gcdnonrecursive (int m,int n)
{
  while (m!= n)

   { 
       if (m > n) 
    m -= n;

    else
     n -= m;
       return (m);
        
    }
}
int main()
{
    int x,y;
    printf("Enter the value of x:\n");
    scanf("%d",&x);

 printf("Enter the value of y:\n");
    scanf("%d",&y);

   printf("The value of GCD non recursion is :- %d", gcdnonrecursive(x,y));
    return 0;
}