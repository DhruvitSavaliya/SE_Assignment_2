/*   WAP to accept 5 students name and store it in array  */

#include<stdio.h>
main()
{
	char name[5][10];
	int i;
	
	for(i=0;i<5;i++)
	{
		printf("\n Enter %d Student name : \n",i+1);
		scanf("%s",&name[i]);
	}
	
	printf("\n Students name : \n");
	printf("\n");
	for(i=0;i<5;i++)
	{
		printf("%s ",name[i]);
	}
}
