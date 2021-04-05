#include <stdio.h>
main()
{
	int n,i;                                                       //example: n=3
	printf("enter a number");                                      //     1
	scanf("%d",&n);                                                //     2*2
	                                                               //     3*3*3
	for(i=1;i<=n;i++)                                              //     2*2
	{                                                              //     1
		for(int j=1;j<=i;j++)
		{
			printf("%d",i);
			if(i != j)
			printf("*");
		}
		printf("\n");
	}
	
	int t=i-1;
	for(int l=t ;l>=1;l--)
	{
		for(int j=1;j<=l;j++)
		{
			printf("%d",l);
			if(i != j)
			printf("*");
		}
		printf("\n");
	}
	
	
}
