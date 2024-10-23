/*  WAP to find reverse of string using recursion  */

#include<stdio.h>

void revers(char*);

main()
{
	char str[50];
	
	printf("\n Enter String \n");
	gets(str);
	
	printf("\n Revers String \n");
	revers(str);
	printf("\n");	
}

void revers(char *str)
{
	if(*str=='\0')
	{
		return;
	}
	
	revers(str+1);
	printf("%c",*str);
}
