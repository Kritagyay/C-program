#include<stdio.h>

void printStr(char str[])
{
    int i=0;
    while (str[i]!='\0')
   { 
       printf("%c",str[i]);
        i++;
    }
}
int main()

{
    //char str[]="kritagyay";        we also can use these both terms as written in comments 
    //char str[]={'k','r','i','\0'};
    char str[15];
    
    gets(str);
    printStr(str);
    puts(str);
    printf("%s\n",str);

    return 0;
}