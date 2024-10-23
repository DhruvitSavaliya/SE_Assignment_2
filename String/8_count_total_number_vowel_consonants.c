/*  Write a program in C to count the total number of vowels or consonants in a 
string. */

#include<stdio.h>
main()
{
	char str[10];
	int i,vowel=0,cons=0;
	
	printf("\n Enter String : \n");
	gets(str);
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
		{
			vowel++;
		}
		else
		{
			cons++;
		}
	}
	
	printf("\n Total number of vowels : %d \n",vowel);
	printf("\n Total number of consonants : %d \n",cons);
}
