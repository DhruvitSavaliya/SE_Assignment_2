/*  Write a program in C to print individual characters of a string in reverse order */

#include<stdio.h>
#include<string.h>
main()
{
	char str[10];
	int length;
	
	printf("\n Enter String : \n");
	gets(str);
	
	length = strlen(str);
	
	for(str[length]='\0';length>=0;length--)
	{
		printf("\n %c \n",str[length]);
	}
}
