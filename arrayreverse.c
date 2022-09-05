#include <stdio.h>
//making a progmamme in which a function will return the reverse of a array before and after
void func1(int arg[])
{
    printf("before reverse :-\n");
for (int i = 0; i < 6; i++)
{
    printf("%d ",arg[i]);
}
printf("\n");
printf("After reverse :-\n");
for (int j = 5; j > -1; j--)
{
    printf("%d ",arg[j]);
}
}
int main()
{
int s1[]={1,2,3,4,5,6};
func1(s1);
return 0;
}