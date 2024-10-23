/*   Write a program in C to separate individual characters from a string.  */

#include<stdio.h>
main()
{
	char str[10];
	int i;
	
	printf("\n Enter String : \n");
	gets(str);
	
	for(i=0;str[i]!='\0';i++)
	{
		printf("\n %c \n",str[i]);
	}
}
