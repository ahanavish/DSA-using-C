#include <stdio.h>
main()
{
	int n, c, k, space;
	printf("Enter the number\n");
	scanf("%d", &n);
	
	space =n-1;;
	for (k = 1; k <= n; k++,space--)
	{
		for (c = 1; c <= space; c++)
		printf(" ");
		
		for (c = 1; c <= 2*k-1; c++)
		printf("*");
	
		printf("\n");
	}
	
	space = 1;
	for (k = 1; k <= n -1; k++,space++)
	{
		for (c = 1; c <= space; c++)
		printf(" ");
		
		for (c = 1 ; c <= 2*(n-k)-1; c++)
		printf("*");
		
		printf("\n");
	}	
}
