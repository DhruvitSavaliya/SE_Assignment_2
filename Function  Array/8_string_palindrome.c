/*  WAP to reverse a string and check that the string is palindrome or not    */

#include<stdio.h>
#include<string.h>
main()
{
	int i;
	char str1[20],str2[20];
	
	printf("\n Enter any string value : \n");
	scanf("%s",&str1);
	
	strcpy(str2,str1);
	
	strrev(str1);
	
	i = strcmp(str1,str2);
	
	if(i==0)
	{
		printf("\n %s is palindrome \n",str2);
	}
	else
	{
		printf("\n %s is not palindrome \n",str2);
	}
}
