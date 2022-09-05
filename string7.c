#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	char *ptr=str;
	int count=0;	
	printf("Enter the string:\n");
	gets(str);	
   while(*ptr!='\0')
	{
		count++;
        ptr++;
	}	
	printf("Length of string= %d",count);
return 0;
}