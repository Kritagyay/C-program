#include<stdio.h>

void swap(int *x,int*y)
{
int temp=0;
temp=*x;
*x=*y;
*y=temp;
printf("The value after swapping of a and b is:  %d     and     %d",*x,*y);
}
int main()
{
   int a,b;
   printf ("Enter the  value of a i.e.\n ") ;
    scanf( "%d",&a);

  printf ("Enter the  value of b i.e.\n ") ;
    scanf( "%d",&b);

   printf("The value of a and b befor swapping is:  %d and %d\n",a,b);
   
   swap(&a,&b);  
    return 0;
}