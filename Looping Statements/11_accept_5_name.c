/* Accept 5 names from user at run time.  */

#include<stdio.h>
main()
{
	int i;
	char name[10];
	
	for(i=1;i<=5;i++)
	{
		gets(name);
	}
}
