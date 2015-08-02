#include<stdio.h>
#include<string.h>
void strcopy(char*,char*);
void main()
{
	int MAX = 50;
	char *source = "asdfkljh";
	char *dest;
	dest = malloc(sizeof(char)*MAX);
	strcopy(dest,source);
	printf("%s\n",dest);

}
	
void strcopy(char *dest, char *source)
{
	while(*dest++=*source++)
	;
}

