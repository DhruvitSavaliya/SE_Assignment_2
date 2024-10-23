/* Write a program in C to copy one string to another string. */

#include<stdio.h>
main()
{
	char str1[10],str2[10];
	int i;
	
	printf("\n Enter String : \n");
	gets(str1);
	
	for(i=0;str1[i]!='\0';i++)
	{
		str2[i] = str1[i];
	}
	
	printf("\n Copy String \n");
	printf("\n %s \n",str2);
}
