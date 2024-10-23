/*  Write a program in C to compare two strings without using string library 
functions.  */

#include<stdio.h>
main()
{
	char str1[10],str2[10];
	int i,flag;
	
	printf("\n Enter String 1 : \n");
	gets(str1);
	
	printf("\n Enter String 2 : \n");
	gets(str2);
	
	for(i=0;str1[i]!='\0';i++)
	{
		if(str1[i]!=str2[i])
		{
			flag=1;
			break;
		}
		else
		{
			flag=0;
		}
	}
	
	if(flag==0)
	{
		printf("\n Both string same \n ");
	}
	else
	{
		printf("\n Both string not same \n");
	}
}
