#include <stdio.h>
#include <string.h>
void main()
{
	char a[10],b[10],c[10];
	int p=0,r=0,i=0,x,g,s,n,o,t=0;
	puts("Enter First String:");
	gets(a);
	puts("Enter Second String:");
	gets(b);
	printf("Enter the position where the item has to be inserted: ");
	scanf("%d",&p);
	r = strlen(a);
	n = strlen(b);
	i=0;
	while(i <= r)
	{
		c[i]=a[i];
		i++;
	}	
	s = n+r;
	o = p+n;
	for(i=p;i<s;i++)
	{
		x = c[i];
		if(t<n)
		{
			a[i] = b[t];
			t=t+1;
		}
		a[o]=x;
		o=o+1;
	}
	printf("%s", a);
}