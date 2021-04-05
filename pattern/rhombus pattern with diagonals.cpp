#include <stdio.h>
main()
{
	int i, j, n;
	printf("enter a number(odd)");
	scanf("%d", &n); 

	int num = (n / 2) * 3;
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			// center horizontal, center vertical, upper left diagonal, bottom left diagonal, upper right diagonal, bottom right diagonal
			if(i == n / 2 || j == n / 2 || i + j == n / 2 || i - j == n / 2 || j - i == n / 2 || i + j == num)
			printf("*");

			else
			printf(" ");
		}
	printf("\n");
	}
}
