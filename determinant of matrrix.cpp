#include <stdio.h>
#include <math.h>
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
	{
		int p=pow(-1,i),j,k;             //power of i on (-1)
		if(i==0)
			j=1,k=2;
		else if(i==1)
				j=0,k=2;
			else if(i==2)
					j=0,k=1;
					
		sum=sum+(arr[0][i]*(arr[1][j]*arr[2][k]-arr[2][j]*arr[1][k]))*p;
	}
	printf("determinant= %d",sum);	
}
