#include <stdio.h>
#include <math.h>
main()
{
	int n;
	printf("enter a number");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)
	{
		if(i==1)
		{
			for(int j=1;j<2*n;j++)
			printf("*");
		}
		
		for(int j=1;j<i;j++)
			printf(" ");
		
		if(i!=1)
		{
		printf("*");
		
		for(int j=0;j<abs(n-i);j++)
			printf(" ");
		
		for(int k=1;k<(n-i);k++)
			printf(" ");
			
		if(i!=n)	
			printf("*");
		}
			
		printf("\n");
	}
}
