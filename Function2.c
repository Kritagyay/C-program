#include<stdio.h>
#include <math.h>

int swap(int x,int y)
{
int temp=x;
x=y;
y=temp;
printf("\nAfter swapping a=%d and b=%d\n", x,y);
}
int main()
{
    int a,b;
   printf("Enter the value of a and b\n");
   scanf("%d %d",&a,&b);
    printf("\nThe numbers before swapping is a = %d and b = %d\n",a,b);
    swap(a,b);
    return 0;
}
