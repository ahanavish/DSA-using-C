#include <stdio.h>
main()
{
	int l,b,i,j;
	printf("enter the length and breadth");
	scanf("%d %d",&l,&b);
	
	for(int i=1;i<=l;i++)
	{
		for(j=1;j<=b;j++)
		{
			if(i==1 || i==l || j==1 || j==b)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
	
}
