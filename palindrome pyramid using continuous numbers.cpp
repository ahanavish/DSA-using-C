#include <stdio.h>
main()
{
	int n,i,j,k=1;
	printf("enter a number");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		int j=1;
		while(i+j<=n)
		{
			printf(" ");
			j++;
		}
		
		int t=i;
		for(j=1;j<=i;j++,t++)
		printf("%d",t);
		
		int k=1;
		while(i!=k)
		{
			printf("%d",t-2);
			t--;
			k++;
		}
		
		printf("\n");
	}
}
