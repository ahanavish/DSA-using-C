#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,k,l,n;
	printf("Enter a number (if >27 then special characters maybe printed as well) : ");
	scanf("%d",&n);
	
	for(i = 1; i <= n; i++)
	{
	/*	int j=1;
		while(i+j<=n)                      //to make half pyramid into full pyramid
		{
			printf(" ");
			j++;
		}                */ 
		             
		for(k = 1; k <= i; k++)
		printf("%c",(k + 65 - 1));
		
		for(l = i-1; l >= 1; l--)
		printf("%c",(l + 65 - 1));
		
		printf("\n");
	}
}
