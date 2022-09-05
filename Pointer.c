#include <stdio.h>
int main()
{
  int a=10;
  int* ptra=&a;
  printf("The address of pointer to a  is %x\n",&ptra);
  printf("The value of a is %d\n",*ptra);
  printf("The value of a is %d\n",a);
printf("The value of a is %x\n",ptra);
    return 0;
}
