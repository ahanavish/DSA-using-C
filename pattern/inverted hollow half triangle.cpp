#include <stdio.h>
main()
{
	int n;
	printf("enter a number");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)
	{
		for(int j=n;j>=i;j--)
		{
			if(i==1 || i==n || j==n || j==i)
			printf("*");
			else 
			printf(" ");
		}
		printf("\n");
	}
}
