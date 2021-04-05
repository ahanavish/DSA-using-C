#include <stdio.h>
main()
{
	int arr[3][3];
	printf("enter elements");
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			scanf("%d",&arr[i][j]);
			
	printf("\narray and sum of each row and column:\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
			printf("%d\t",arr[i][j]);
			
		int sum=0;
		for(int j=0;j<3;j++)
			sum=sum+arr[i][j];
		printf("|%d\n",sum);		
	}
	
	for(int i=0;i<3;i++)
		printf("__\t");
	
	printf("\n");	
	for(int j=0;j<3;j++)
	{
		int sum=0;
		for(int i=0;i<3;i++)
			sum=sum+arr[i][j];
		printf("%d\t",sum);
	}
	
	
}
