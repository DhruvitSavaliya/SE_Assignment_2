/* Series Program:
	1/2 - 2/3 + 3/4 - 4/5 + 5/6 .......... n */

#include<stdio.h>
main()
{
	
    double i, n,sum=0;
    
    printf("\n Enter any number : \n");
	scanf("%lf",&n);
    
    for(i=1;i<=n;i++)
    {
        if ((int)i%2==1)
            sum+=i/(i+1);
        else
            sum-=i/(i+1);
    }
    
    printf("Sum: %lf",sum);

}
