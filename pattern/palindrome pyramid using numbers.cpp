#include <stdio.h>
main()
{
	int n;
	printf("enter number");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{ 
		/*	int j=1;
			while(j+i<=n)                                      //half pyramid can be made full pyramid
			{
				printf(" ");
				j++;
			}     */        
			
			for(int j=1;j<=i;j++)
			{
				printf("%d",j);
			}
			
			for(int l=i-1;l>=1;l--)
			{
				printf("%d",l);
			}
			printf("\n");
	}
		
}
