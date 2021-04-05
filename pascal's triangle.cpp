#include <stdio.h>
int main()
{
	int n, t= 1,c, i, j;
	printf("\nEnter the number of rows : ");
	scanf("%d",&n);
	printf("\n");

	for(i=0;i<n;i++)
	{
		for(c=1;c<n-i;c++)
			printf(" ");

		for(j=0;j<= i;j++)
		{
			if (j==0 || i==0)
				t = 1;
			else
				t= t*(i-j+1)/j;
			printf("%d",t);
		}
		printf("\n");
	}
}
