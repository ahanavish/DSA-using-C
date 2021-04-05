#include <stdio.h>
main()
{
	int n,t=1;
	printf("enter numbers of rows");
	scanf("%d",&n);

	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++,t++)
			printf("%d",t);
		printf("\n");
	}
	
}
