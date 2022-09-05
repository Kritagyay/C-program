#include<stdio.h>
#include<conio.h>
int main()
{
 int f0=0,f1=1,f,n,i;
 printf("Enter the value for n");
 scanf("%d",&n);
 i=0;
 while(i<n)
 {
    printf("%d \t ",f0);
    f=f0+f1;
    f0=f1;
    f1=f;
    i=i+1;
 }   
    return 0;
}
