#include <stdio.h>
main()
{
	int n;
	printf("enter a year");
	scanf("%d",&n);
	// year must be divisible by 4
	//it need not be divisble by 100
	//if it is divisble by 100 then it must be divisble by 400 too
	if(n%4==0)
		if(n%100!=0)
			printf("leap");
		else 
			if(n%400==0)
				printf("leap");
			else 
				printf("not leap");
	/* alternative
	if(n%400==0)||(n%4==0 && n%100!=0)
	printf("leap");
	else
	printf("not leap");   */
}
