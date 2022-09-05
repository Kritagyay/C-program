#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
   char s[30], t[20];
   char *found;
   puts("Enter the first string: ");
   gets(s);
   puts("Enter the string to be searched: ");
   gets(t);
   found = strstr(s, t);
   if(found)
   {
      printf("Second String is found in the First String at %d position.\n", found - s);
   }
   else
   {
      printf("-1");
   }
}