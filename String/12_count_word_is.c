/*  Write a program in C to find the number of times a given word 'is' appears in 
the given string. */

#include<stdio.h>
#include<string.h>
main()
{
	char str1[50];
	char str2[50]="is";
	int i,j,str1length,str2length,found,count=0;
	
	printf("\n Enter any string : \n");
	gets(str1);
	
	printf("\n String = %s \n",str1);
	
	str1length = strlen(str1);
	str2length = strlen(str2);
	
	for(i=0 ; i<=str1length-str2length ;  i++)
	{
		found = 1;
		
		for(j=0 ; j<str2length ; j++)
		{
			if(str1[i+j] != str2[j])
			{
				found = 0;
				break;
			}
		}
		if(found == 1)
		{
			count++;	
		}
	}
	
	printf("\n total Words : %d \n",count);
}
