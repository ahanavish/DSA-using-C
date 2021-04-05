#include <stdio.h>
main()
{
	int arr[3][3];
	printf("enter elements");
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			scanf("%d",&arr[i][j]);
			
	printf("array:\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
			printf("%d",arr[i][j]);
		printf("\n");	
	}
			
	int sum=0;
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			if(i==j)
				sum=sum+arr[i][i];
				
	printf("\ntrace: %d",sum);
	
	
}
