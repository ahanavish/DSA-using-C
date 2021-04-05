#include <stdio.h>
main()
{
	int arr[3][3],brr[3][3];
	printf("enter elements of array");
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			scanf("%d",&arr[i][j]);
			
	printf("\narray:\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
			printf("%d",arr[i][j]);
		printf("\n");
	}
	
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			brr[i][j]=arr[j][i];
	
	int t=0;
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			if(arr[i][j]==brr[i][j])
				t++;	
	
	if(t==9)
		printf("\nsymmetric matrix");
	else
		printf("\nnot symmetric");
	
}
