#include <stdio.h>
main()
{
	int n,i,j;
	printf("enter a number");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j==1)
			printf("%d",j);
			
			if(j!=1 && j!=n && i!=n)
			{
				if(j==i)
				printf("%d",i);
				
				else
				printf(" ");
			}
			
			if(i==n && j!=1)
			printf("%d",j);
		}
		printf("\n");
	}
}
