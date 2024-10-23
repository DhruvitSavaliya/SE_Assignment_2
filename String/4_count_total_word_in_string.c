/*  Write a program in C to count the total number of words in a string.  */

#include<stdio.h>
main()
{
	char str[50];
	int i,count=0;
	
	printf("\n Enter any string : \n");
	gets(str);
	
	printf("\n String = %s \n",str);
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
		    count++;
		}
	}
	
	printf("\n total Words : %d \n",count+1);
}
