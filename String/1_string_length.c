/*  Write a program in C to find the length of a string without using library 
functions.   */

#include<stdio.h>
main()
{
	char str[10];
	int i,length=0;
	
	printf("\n Enter any string : \n");
	//scanf("%s",&str);
	gets(str);
	
	printf("\n String = %s \n",str);
	
	for(i=0;str[i]!='\0';i++)
	{
		length++;
	}
	
	printf("\n Length of string : %d \n",length);
}
