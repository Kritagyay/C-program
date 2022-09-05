#include<stdio.h>
#include<string.h>
int main()
{
    char s1[25]; 
    char s2[21] ;
     char s3[]="    is friend of     ";
     char s4[65];
     //puts(strcat(s1,s2));                 
           // printf("The strings are coppied in s3 such that: %s\n ", strcpy(s3,strcat(s1,s2)));

printf("Enter the name of friend 1 : ");
gets(s1);
printf("Enter the name of friend 2 : ");
gets(s2);
//printf("%s is the friend of %s and now by concanating them we get : ",s1,s2);
//puts(strcat(s1,s2));

strcpy(s4,strcat(s1,strcat(s3,s2)));
puts(s4);






    return 0;
}