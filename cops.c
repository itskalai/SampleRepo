#include<stdio.h>
#include<string.h>

void main()
{
	int MAX=100;
	char *source, *dest;
	void cops(char *, char *);
	source = "hello world";
	dest = malloc((sizeof(char))*MAX);
	cops(dest,source);
	printf("%s,%s",source,dest);
}

void cops(char *t, char *s)
{
	while(*t++ = *s++)
	;
}
