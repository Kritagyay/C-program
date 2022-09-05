#include <stdio.h>

int main()
{
    int i,n;
    printf ("Enter the num whose table has to be printed :");
    scanf("%d",&n);
   for (i=1;i<=10;i++)
{
    printf("%d * %d = %d \n", n ,i ,n*i);
}
    
    return 0;
}
