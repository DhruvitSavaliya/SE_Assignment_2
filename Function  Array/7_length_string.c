/* WAP Find out length of string without using inbuilt function */

#include<stdio.h>
main()
{
	char str[10];
	int i,count=0;
	
	printf("\n Enter any string : \n");
	//scanf("%s",&str);
	gets(str);
	
	printf("\n String = %s \n",str);
	
	for(i=0;str[i]!='\0';i++)
	{
		count++;
	}
	
	printf("\n Length of string : %d \n",count);
}
