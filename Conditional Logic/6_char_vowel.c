/* Find the Character Is Vowel or Not  */

#include<stdio.h>
main()
{
	char c;
	
	printf("\n Enter Any Character : \n");
	scanf("%c",&c);
	
	if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
	{
		printf("\n %c is Vowel Character \n",c);
	}
	else
	{
		printf("\n %c is Not Vowel Character \n",c);
	}
}
